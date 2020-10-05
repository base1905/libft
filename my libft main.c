#include <stdio.h>
#include<stdlib.h>
#include "libft.h"

int main()
{

/*//проверка strlcpy

	char src[10]="012345678";
	char dst[5]="baHe";
	char *test;
	char **test2;
	printf("\n");
	printf( "src: %s\n", src);
	printf( "size of src: %zu\n", ft_strlen(src));
	printf( "dst: %s\n", dst);
	printf( "size of dst: %zu\n", ft_strlen(dst));

	printf("Return of strlcpy: %zu\n", ft_strlcpy(dst,src,9));
	printf("len in strlcpy is 9\n");
	printf("dst after strlcpy: %s\n", dst);
	printf( "size of dst: %zu\n", ft_strlen(dst));
	printf("\n");
*/

  //проверка strlcat

	char src[10]="012345678";
	char dst[5]="baHe";
	char *test;
	char **test2;
	printf("\n");
	printf("Функция strlcpy копирует из строки src в буфер dst, таким образом, чтобы продолжить строку, на которую указывает dst\n");
	printf( "dst: %s\n", dst);
	printf( "size of dst: %zu\n", ft_strlen(dst));
	printf( "src: %s\n", src);
	printf( "size of src: %zu\n", ft_strlen(src));

	printf("Return of strlcat: %zu\n", ft_strlcat(dst,src,3));
	printf("len in strlcat is 10\n");
	printf("dst after strlcat: %s\n", dst);
	printf( "size of dst: %zu\n", ft_strlen(dst));
	printf("\n");



	//test = ft_memccpy(dest, src, 'e', 10);
	//printf("%s\n",test);
    // *test='\0';
	//printf("Return: %s\n",test);
	//printf( "Dest: %s\n", dest);
  	//printf( "Length of return: %zu char\n", ft_strlen(test));

//printf( "Source: %s\n", src );
//printf( "Dest: %s\n", dest);
//test = ft_strrchr(src, 'l');

//test = ft_memchr(src, 'e', 10);
//printf("%s\n",test);

//test2=ft_split(src, 'o');
//printf("%s\n", test2[0]);
//printf("%s\n", test2[1]);
//printf("%s\n", test2[2]);

//test = ft_strtrim(src, dest);
//printf("%s\n", test);

//char base[]="922337d7203685477580899";
//printf("%d\n%d\n", ft_atoi(base), atoi(base));


return(0);
}
