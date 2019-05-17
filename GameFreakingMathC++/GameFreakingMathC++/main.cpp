#include<stdio.h>
#include<conio.h>
#include<console.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void inmang(char A[50])
{
	int iN=0;
	for(int i=0;i<50;i++)
	{
		TextColor(iN);
		printf("%c",A[i]);
		iN++;
		if(iN>15)
		{
			iN=0;
		}
	}
	TextColor(7);
}
void thoigian(char &key,int &n,int &nhanhcham)
{

	char TG[50];
	for(int i=0;i<50;i++)
	{
		TG[i]='|';
	}
	gotoXY(0,14);
	printf("Thoigian");
	for(int i=49;i>=0;i--)
	{

		TG[i]=' ';
		gotoXY(0,15);
		inmang(TG);	
		Sleep(nhanhcham);
		if(kbhit())
		{
			key=getch();
			break;
		} 
		if(TG[0]==' ')
			n=2;  
	}
	gotoXY(0,0);

}

void veSo(int iN, int iX, int iY)
{
	if(iN==1) // so 1
	{
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("  MMMMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("    MMM");
		gotoXY(iX,iY++);
		printf("  oMMMMMo");
	}
	if(iN==2)// so 2
	{
		gotoXY(iX,iY++);
		printf("    MMMMM");
		gotoXY(iX,iY++);
		printf("   MMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MM    MMM");
		gotoXY(iX,iY++);
		printf("        MMM");
		gotoXY(iX,iY++);
		printf("       MMM");
		gotoXY(iX,iY++);
		printf("      MMM");
		gotoXY(iX,iY++);
		printf("     MM    M");
		gotoXY(iX,iY++);
		printf("   MMMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMM");
	}
	if(iN==3)// so 3
	{
		gotoXY(iX,iY++);
		printf("    MMMMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMM");
		gotoXY(iX,iY++);
		printf("  M    MMM");
		gotoXY(iX,iY++);
		printf("      MMM");
		gotoXY(iX,iY++);
		printf("    @MMMMM");
		gotoXY(iX,iY++);
		printf("       MMMM");
		gotoXY(iX,iY++);
		printf("        MM@");
		gotoXY(iX,iY++);
		printf("  MMM  MMM");
		gotoXY(iX,iY++);
		printf("   MMMMMM");
	}
	if(iN==4)// so 4
	{
		gotoXY(iX,iY++);
		printf("        MM");
		gotoXY(iX,iY++);
		printf("       MMM");
		gotoXY(iX,iY++);
		printf("     MMMMM");
		gotoXY(iX,iY++);
		printf("    MMM MM");
		gotoXY(iX,iY++);
		printf("   MM   MM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMMM");
		gotoXY(iX,iY++);
		printf("        MM");
		gotoXY(iX,iY++);
		printf("        MM");
	}
	if(iN==5)// so 5
	{
		gotoXY(iX,iY++);
		printf("      MMMMMM  ");
		gotoXY(iX,iY++);
		printf("     MMMMMMM  ");
		gotoXY(iX,iY++);
		printf("    MMM0      ");
		gotoXY(iX,iY++);
		printf("    MMMMMME   ");
		gotoXY(iX,iY++);
		printf("       MMMMM  ");
		gotoXY(iX,iY++);
		printf("         MMM  ");
		gotoXY(iX,iY++);
		printf("          MM  ");
		gotoXY(iX,iY++);
		printf("   MMMMMMMM   ");
		gotoXY(iX,iY++);
		printf("  MMMMMMM     ");
	}
	if(iN==6)// so 6
	{
		gotoXY(iX,iY++);
		printf("      MMMM");
		gotoXY(iX,iY++);
		printf("    MMMMv");
		gotoXY(iX,iY++);
		printf("   MMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MMM   MMM");
		gotoXY(iX,iY++);
		printf("  MMM    MM");
		gotoXY(iX,iY++);
		printf("   MMM  MMM");
		gotoXY(iX,iY++);
		printf("    MMMMM");
	}
	if(iN==7)//so7
	{
		gotoXY(iX,iY++);
		printf("   MMMMMMMM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMM");
		gotoXY(iX,iY++);
		printf("  M     MM");
		gotoXY(iX,iY++);
		printf("       MMM");
		gotoXY(iX,iY++);
		printf("       MM");
		gotoXY(iX,iY++);
		printf("      MM");
		gotoXY(iX,iY++);
		printf("      MM");
		gotoXY(iX,iY++);
		printf("     MM");
		gotoXY(iX,iY++);
		printf("     MM");
	}
	if(iN==8)//so 8
	{
		gotoXY(iX,iY++);
		printf("   MMMMMM");
		gotoXY(iX,iY++);
		printf("  MME   MM");
		gotoXY(iX,iY++);
		printf("  MMM  oMM");
		gotoXY(iX,iY++);
		printf("  SMMMMMM");
		gotoXY(iX,iY++);
		printf("   7MMMMM");
		gotoXY(iX,iY++);
		printf("  MMM MMMM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MMMBzMMM");
		gotoXY(iX,iY++);
		printf("   MMMMMM");
	}
	if(iN==9)// so 9
	{
		gotoXY(iX,iY++);
		printf("   cMMMMMU");
		gotoXY(iX,iY++);
		printf("  MMM   MMM");
		gotoXY(iX,iY++);
		printf("  MM0    MM");	
		gotoXY(iX,iY++);
		printf("  MMM    MM");
		gotoXY(iX,iY++);
		printf("  MMMMMMMMM");
		gotoXY(iX,iY++);
		printf("    MMMMMMM");
		gotoXY(iX,iY++);
		printf("       MMM");
		gotoXY(iX,iY++);
		printf("     MMMM");
		gotoXY(iX,iY++);
		printf("  MMMMM");
	}
	if(iN==0)// so 0 
	{
		gotoXY(iX,iY++);
		printf("   MMMMMM");  
		gotoXY(iX,iY++);
		printf("  MMM  MMM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("  MM    MM");
		gotoXY(iX,iY++);
		printf("   MMMMMM");

	}
}
void solon(int iN,int iX,int iY)
{
	int N=0;
	for(int i=0;i<2;i++)
	{
		N=iN%10;
		veSo(N,iX,iY);
		iX=iX-12;
		iN=iN/10;
	}
}
int SaiCong(int iC,int &iSai)
{
	iSai=0;
	srand(time(0));
	iSai=iC+1+(int)rand()%iC/2;
	return iSai;
}
int SaiTru(int iC,int &iSai)
{
	iSai=0;
	srand(time(0));
	iSai=iC-1-(int)rand()%iC/2;
	return iSai;
}
void DauCong(int iX, int iY)
{

	printf("\n");
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("   MM    ");
	gotoXY(iX,iY++);
	printf("   MM    ");
	gotoXY(iX,iY++);
	printf("MMMMMMMM");
	gotoXY(iX,iY++);
	printf("MMMMMMMM");
	gotoXY(iX,iY++);
	printf("   MM    ");
	gotoXY(iX,iY++);
	printf("   MM    ");
}
void DauBang (int iX,int iY)
{
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("MMMMMMMM");
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("MMMMMMMM");
	gotoXY(iX,iY++);
	printf("\n");
	gotoXY(iX,iY++);
	printf("\n");

}
void Logogame(char &key)
{
	int iN=0;
	int n=0;
	while(n==0)
	{
		for(int i=0;i<15;i++)
		{
			TextColor(iN);
			printf("MMMMMMM                                                       MM     MM\nM        MMMM   MMMMM    M     M   M  M  MM    M  MMMMMM      M M   M M     M    MMMMM  M   M\nMMM      M   M  M       M M    M  M   M  M M   M  M           M  M M  M    M M     M    M   M\nM        M  M   MMM    M   M   MMM    M  M  M  M  M   MM      M   M   M   M   M    M    MMMMM\nM        MMMM   M      MMMMM   M M    M  M   M M  M    M      M       M   MMMMM    M    M   M\nM        M   M  MMMMM  M   M   M  M   M  M    MM  MMMMMM      M       M   M   M    M    M   M\n");
			Sleep(200);
			clrscr();
			iN++;
			if(iN==15)
			{
				iN=0;
			}
			TextColor(7);
			gotoXY(0,7);
			printf("=============================================================================================\n\n");
			printf("                                  CHON MUC DO TRO CHOI\n");
			printf("                                         1.De\n");
			printf("                                         2.Trung Binh\n");
			printf("                                         3.Kho\n\n");
			printf("=============================================================================================\n");
			printf("Huong dan : neu Dung hay nhan D hoac d , sai hay nhan S hoac s\n");
			gotoXY(0,0);	
			if(kbhit())
			{
				key=getch();
				n=1;
				break;

			}
		}
	}


}
void TinhDiem(int &Diem,int DS,int &n,int nhanhcham)
{
	char kiemtra;
	if(DS==1)
	{
		thoigian(kiemtra,n,nhanhcham);
		if(kiemtra=='D' || kiemtra=='d')
		{
			Diem++;
		}
		else
			n=1;
	}
	if(DS==0)
	{
		thoigian(kiemtra,n,nhanhcham);
		if(kiemtra=='S' || kiemtra=='s')
		{
			Diem++;
		}
		else
			n=1;
	}
}
void toanDung(int iA,int iB,int iC)
{
	veSo(iA,0,0);
	DauCong(14,0);
	veSo(iB,24,0);
	DauBang(39,0);
	veSo(iC,48,0);
}
void toanSai(int iA,int iB,int iSai)
{
	veSo(iA,0,0);
	DauCong(14,0);
	veSo(iB,24,0);
	DauBang(39,0);
	if(iSai>=10)
	{
		solon(iSai,62,0);
	}
	else
	{
		veSo(iSai,48,0);
	}
}
void chinh(int iA,int iB,int iC,int iSai,int iDiem,char &traloi,int &nhanhcham)
{
	int n=0;
	int DungSai;
	int ThSai;
	iDiem=0;
	srand(time(0));
	while(n==0)
	{
		iA=rand()%6;
		iB=rand()%6;
		iC=iA+iB;
		DungSai=rand()%2;
		if(DungSai==1)
		{
			toanDung(iA,iB,iC);
			TinhDiem(iDiem,DungSai,n,nhanhcham);
		}
		if(DungSai==0)
		{
			ThSai=1+rand()%2;
			if(ThSai==1)
			{
				iSai=SaiTru(iC,iSai);
				toanSai(iA,iB,iSai);
				TinhDiem(iDiem,DungSai,n,nhanhcham);
			}
			if(ThSai==2)
			{
				iSai=SaiCong(iC,iSai);
				toanSai(iA,iB,iSai);
				TinhDiem(iDiem,DungSai,n,nhanhcham);
			}

		}
		if(n==1)
		{

			clrscr();
			TextColor(7);
			printf("Tro choi ket thuc\n");
			printf("Diem=%d",iDiem);
			printf("\nPlay again Y/N:");
			traloi=getch();		  	  
		}
		else
		{
			clrscr();
			gotoXY(55,15);
			TextColor(7);
			printf("Diem=%d",iDiem);
			gotoXY(0,0);
		}	

	}		
}
void  khoitao (int &iDem)
{
	int iDiem=0;
	gotoXY(55,15);
	printf("Diem=%d",iDiem);
	gotoXY(0,0);
}
void menu(char &key)
{
	Logogame(key);
}
int main ()
{
	int iA,iB,iC,iSai,iDiem;
	char level;
	char traloi;
	int nhanhcham;
	iA=0;
	iB=0;
	iC=0;
	iSai=0;
	do
	{
		menu(level);
		if(level=='1' || level=='2' || level=='3')
		{ 
			if(level=='1')
				nhanhcham=25;
			if(level=='2')
				nhanhcham=17;
			if(level=='3')
				nhanhcham=12;	 
			clrscr();
			khoitao(iDiem);
			chinh(iA,iB,iC,iSai,iDiem,traloi,nhanhcham);

		}	
	}
	while(traloi=='Y'||traloi=='y');
	if(traloi=='N'||traloi=='n')
	{
		clrscr();
		TextColor(3);
		printf("   TAM BIET\n");
		printf("CHUC BAN VUI VE\n");
		TextColor(4);
		printf("~~~~son pham~~~~");
		TextColor(7);
	}
	else
	{
		clrscr();
		printf("Biet doc chu ko ???\n");	
	}
	getch();
}

