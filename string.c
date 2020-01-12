# include <stdio.h>
<<<<<<< HEAD
size_t my_strlen(char *s)
=======
int my_strlen(char *s)
>>>>>>> e24f034f4e44a396b728a59b4beea291f31da880
{
 	char *p = s;
	while(*p)
	  ++p;
	return (p - s);
}

int main(void)
{
	int i;
	char *s[] = 
	{
	    "Git tutorials",
	    "Tutorials Point"
	};
                  for(i = 0, i  <  2; ++i)
	printf("string length of %s = %d\n", s[i], my_strlen(s[i]));
	return 0;
}
