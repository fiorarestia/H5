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

		printf ("�п�ܤ@�ӼҦ��G(�Q�i��:d,�G�i��:b,�Q���i�쬰:h):");

		scanf ("%c",&restia);

		if (restia==100) 

		{

			printf ("�п�J�@�ӤQ�i��ơG"); 

			scanf ("%d",&fiora);   

			char s[10]; 

			itoa(fiora, s, 2);

			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���G�i� %s�C\n",fiora,s);

			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���K�i� %o�C\n",fiora,fiora); 

			printf ("�z�ҿ�J���Q�i�Ƭ� %d�A�ഫ���Q���i� %x�C\n",fiora,fiora);

			break;

		}

		else if (restia==98)

		{

			long long b;

			printf ("�п�J�@�ӤG�i��ơG"); 

			scanf ("%11d",&b); 

			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���Q�i� %d�C\n",b,convertBinaryToDecimal(b));

			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���K�i� %o�C\n",b,convertBinaryToDecimal(b));

			printf ("�z�ҿ�J���G�i�Ƭ� %lld�A�ഫ���Q���i� %x�C\n",b,convertBinaryToDecimal(b));

			break;

		}

		else if (restia==104)

		{

			printf ("�п�J�@�ӤQ���i��ơG");

			scanf ("%x",&fiora);

			char s[10];  

			itoa(fiora, s, 2);

			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���G�i� %s�C\n",fiora,s);

			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���K�i� %o�C\n",fiora,fiora);

			printf ("�z�ҿ�J���Q���i�Ƭ� %x�A�ഫ���Q�i� %d�C\n",fiora,fiora);

			break;

		}

		else

		printf ("��J���~�A�Э��s��J�C\n");

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
