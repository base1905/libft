
//scopycat  6 days ago
int get_next_line(int fd, char **line)
{
    char        *buf;
    size_t      i;
    static char *hub; //вот тут я ее объявляю
    char        *eof;
    char        *tmp;
    if (!(buf= (char*)malloc(BUFFER_SIZE + 1)) || fd < 0 || BUFFER_SIZE < 1 || !line || read(fd, buf, 0) < 0)
        return (-1);
    eof = check_hub(&hub, line); // тут отправляю в другую функцию и там перезаписываю, если в ней есть \n
    while (!eof && (i = read(fd, buf, BUFFER_SIZE)))
    {
        buf[i] = ‘\0’;
        if ((eof = ft_strchr_gnl(buf, ‘\n’)))
        {
            *eof = ‘\0’;
            hub = ft_strdup(eof + 1); - тут тоже в нее записываю данные после \n
        }
        tmp = *line;
        *line = ft_strjoin_gnl(*line, buf);
        free(tmp);
    }
    free(buf);
    return ((!eof && !i) ? 0 : 1);
}


//sgertrud  3 days ago
//@salec
int main()
{
    int fd;
    char*line;
    fd = open("test.txt",O_RDONLY);
    while (get_next_line(fd,&line) > 0)
    {
        printf("%s",line);
        free(line);
    }
}



//salec:visio:  3 days ago
//я бы делал так наверное
int main()
{
    int    fd;
    char   *line;
    int    gnlret;
    fd = open("test.txt",O_RDONLY);
    while ((gnlret = get_next_line(fd,&line)) >= 0)
    {
        printf("%s",line);
        free(line);
        if (gnlret == 0)
            break ;
    }
    return (0);
}