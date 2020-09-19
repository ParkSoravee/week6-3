#include<stdio.h>

void getStr(char *);
void encode(char*);

int main()
{
	char str[101];
	char* pStr = str;
	getStr(pStr);
	encode(pStr);
	return 0;
}

void getStr(char* str)
{
	scanf_s("%[^\n]s", &*str,100);
}

void encode(char* str)
{
	int i = 0;
	while (*(str+i) != '\0')
	{
		if ( (*(str + i) >= 'a' and *(str + i) <= 'z') or (*(str + i) >= 'A' and *(str + i) <= 'Z') )
		{
			if ( (*(str+i) <= 'Z' and *(str + i)+4 > 'Z') or *(str + i)+4 > 'z')
			{
				printf("%c", *(str + i) - 22);
			}
			else
			{
				printf("%c", *(str + i) + 4);
			}
		}
		else
		{
			printf("%c", *(str + i));
		}
		i++;
	}
}