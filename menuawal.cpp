#include "menuawal.h"
// modul-modul
void SetColor(int ForgC)		//modul untuk mengatur color 
{
     WORD wColor;
     //This handle is needed to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void gotoxy(int x, int y)		// modul untuk pengarahan koordinat
{
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

void pembukaan()
{
	int i;
	system("cls");
	system("Color 70");
	SetColor(6);
	for (i=0;i<=10;i++)
	{
	gotoxy(i-1,1);   printf("  ��������    ������   ������  ������    ����  ��������   ����  ��  ������ ��������");
	gotoxy(19-i,2);  printf(" ��     ��   ��    ��  ��      ��  ��   �� ��  ��    ��   ��        ��  �� ��    ��");
	gotoxy(i-1,3);   printf(" ��     ��   ��    ��  ��      ��   �����  ��  ��    ��   ��    ��  ��  �� ��      ");
	gotoxy(19-i,4);  printf(" �� ������   ��������  ��      �� 	        ��  ��������   ��    ��  ��  �� ��      ");
	gotoxy(i-1,5);   printf(" ��     	  ��    ��  ��      �� 	        ��  ��    ��   ��    ��  ��  �� ��  ����");
	gotoxy(19-i,6);  printf(" ��      	  ��    ��  ��  	��          ��  ��    ��   ��    ��  ��  �� ��    ��");
	gotoxy(i-1,7);   printf(" ��          ��    ��  ������  ��          ��  ��    ��   ��    ��  ��  �� ��������");
		Sleep(100);
	}
	gotoxy(9,8);
	SetColor(4);
	printf("\n\n\n");
	printf("\t���������������������������������������������������������������ͻ\n");
	printf("\t�                                                               �\n");
	printf("\t���������������������������������������������������������������ͼ\n");
	printf("		           	now loading . . .	                          	\n");
	SetColor(11);
	for (i=1;i<=63;i++)
	{
		gotoxy(8+i,12);printf("%c\n\n\n\n\n\n\n\n\n\n",219);
		Sleep(35);
	}
}

void penutupan()															//keluar program
{
	int i;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	system("Color 70");
	for(i=1;i<=10;i++)	{		
		system("cls");
		SetColor(4);
		gotoxy(21-i,8);	 	printf("    ���������    ���     ���  ��������      �             �		\n");
		gotoxy(1+i,9); 		printf("    ��     ��    ���     ���  ��������     ���           ���	\n");
		gotoxy(21-i,10); 	printf("    ��    ��      ���   ���   ��          �� ��         �� ��	\n");
		gotoxy(1+i,11); 	printf("    ��������        �����     ��������        �����������		\n");
		gotoxy(21-i,12); 	printf("    ���������        ���      ��������          ��    ��		\n");
		gotoxy(1+i,13);		printf("    ��     ��        ���      ��                 ��  ��			\n");
		gotoxy(21-i,14);	printf("    ��    ��         ���      ��������            ���           \n");
		gotoxy(1+i,15);		printf("    ��������         ���      ��������             ��           \n");
		Sleep(50);
	}

	for(i=1;i<46;i++){
		SetColor(6);
		gotoxy(i,27); printf(" FAIZ ABDUSSALAM-GERY AGUSTIAN-JEREMIA GERALDI-MUFID JAMALUDDIN");
		gotoxy(i+5,18); printf("���������� ��     �� ��������� ���    �� ��   ��  ���������\n");
		gotoxy(95-i,19); printf("    ��     ��     �� ��     �� ����  �� ��  ��   ��       \n");
		gotoxy(i+5,20);  printf("    ��     ��������� ��������� �� �� �� �����    ���������\n");
		gotoxy(95-i,21); printf("    ��     ��     �� ��     �� ��  ���� ��  ��          ��\n");
		gotoxy(i+5,22);  printf("    ��     ��     �� ��     �� ��   ��� ��   ��         ��\n");
		gotoxy(95-i,23); printf("    ��     ��     �� ��     �� ��    �� ��    �� ���������\n");
		Sleep(35);
	}
	gotoxy(i-1,25); printf("<<EXIT");	
	system("pause");
}
