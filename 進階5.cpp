#include <stdio.h> 

#include <stdlib.h> 

#include <math.h> 

int convertBinaryToDecimal(long long b); 



int main() 

{
	char restia; 

	int fiora; 

	for (;;)

	{	

		printf ("請選擇一個模式：(十進位:d,二進位:b,十六進位為:h):");

		scanf ("%c",&restia);

		if (restia==100) 

		{

			printf ("請輸入一個十進位數："); 

			scanf ("%d",&fiora);   

			char s[10]; 

			itoa(fiora, s, 2);

			printf ("您所輸入的十進數為 %d，轉換成二進制為 %s。\n",fiora,s);

			printf ("您所輸入的十進數為 %d，轉換成八進制為 %o。\n",fiora,fiora); 

			printf ("您所輸入的十進數為 %d，轉換成十六進制為 %x。\n",fiora,fiora);

			break;

		}

		else if (restia==98)

		{

			long long b;

			printf ("請輸入一個二進位數："); 

			scanf ("%11d",&b); 

			printf ("您所輸入的二進數為 %lld，轉換成十進制為 %d。\n",b,convertBinaryToDecimal(b));

			printf ("您所輸入的二進數為 %lld，轉換成八進制為 %o。\n",b,convertBinaryToDecimal(b));

			printf ("您所輸入的二進數為 %lld，轉換成十六進制為 %x。\n",b,convertBinaryToDecimal(b));

			break;

		}

		else if (restia==104)

		{

			printf ("請輸入一個十六進位數：");

			scanf ("%x",&fiora);

			char s[10];  

			itoa(fiora, s, 2);

			printf ("您所輸入的十六進數為 %x，轉換成二進制為 %s。\n",fiora,s);

			printf ("您所輸入的十六進數為 %x，轉換成八進制為 %o。\n",fiora,fiora);

			printf ("您所輸入的十六進數為 %x，轉換成十進制為 %d。\n",fiora,fiora);

			break;

		}

		else

		printf ("輸入錯誤，請重新輸入。\n");

	}

	

	system ("pause");

	return 0; 

}

int convertBinaryToDecimal(long long b)

{

    int decimalNumber = 0, i = 0, remainder;

    while (b!=0)

    {

        remainder = b%10;

        b /= 10;

        decimalNumber += remainder*pow(2,i);

        ++i;

    }

    return decimalNumber;

}
