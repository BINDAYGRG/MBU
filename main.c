#include<stdio.h>
#include<conio.h>
#include<windows.h>
void bootable();
void format();
void binay();
main()
{
	system("cls");
	binay();
	system("color 4a");
	int x;
	printf("\n\n\tFirst Format Your Drive Then Try for making Bootable USB");
	printf("\n\n\t1.Format Your USB Drive.\t\t2.Make Bootable USB.");
	printf("\n\n\n\t\tCHOOSE THE OPTION   :   ");
while(1)
{
	x=getche();
	x=toupper(x);
switch(x)
{
	case '1':
	system("cls");
	format();
	break;
	case '2':
	system("cls");
	bootable();
}
}
getch();
}
void format()
{
	system("color 1a");
   char f;
system("cls");
	printf("\n\t\t\tDEVLOPED BY BINAYA GURUNG\n\n\t\tMORE INFO : VINAYGURUNG.BLOGSPOT.COM\n");
printf("\n\n\t\tEnter the USB DRIVE Letter :  ");
scanf("%s", &f);
switch(f)
{
	case 'a':
    case 'A':
    system("format /FS:NTFS /Q /A:4096 /V:vinay A:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'b':
    case 'B':
    system("format /FS:NTFS /Q /A:4096 /V:vinay B:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'c':
    case 'C':
    system("format /FS:NTFS /Q /A:4096 /V:vinay C:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'd':
    case 'D':
    system("format /FS:NTFS /Q /A:4096 /V:vinay D:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'e':
    case 'E':
    system("format /FS:NTFS /Q /A:4096 /V:vinay E:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'f':
    case 'F':
    system("format /FS:NTFS /Q /A:4096 /V:vinay F:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'g':
    case 'G':
    system("format /FS:NTFS /Q /A:4096 /V:vinay G:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'h':
    case 'H':
    system("format /FS:NTFS /Q /A:4096 /V:vinay H:");
    printf("\n\n\t\t\t");
     main(); break;
    	case 'i':
    case 'I':
    system("format /FS:NTFS /Q /A:4096 /V:vinay I:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'j':
    case 'J':
    system("format /FS:NTFS /Q /A:4096 /V:vinay J:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'k':
    case 'K':
    system("format /FS:NTFS /Q /A:4096 /V:vinay K:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'l':
    case 'L':
    system("format /FS:NTFS /Q /A:4096 /V:vinay L:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'm':
    case 'M':
    system("format /FS:NTFS /Q /A:4096 /V:vinay M:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'n':
    case 'N':
    system("format /FS:NTFS /Q /A:4096 /V:vinay N:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'o':
    case 'O':
    system("format /FS:NTFS /Q /A:4096 /V:vinay O:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'p':
    case 'P':
    system("format /FS:NTFS /Q /A:4096 /V:vinay P:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'q':
    case 'Q':
    system("format /FS:NTFS /Q /A:4096 /V:vinay Q:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'r':
    case 'R':
    system("format /FS:NTFS /Q /A:4096 /V:vinay R:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 's':
    case 'S':
    system("format /FS:NTFS /Q /A:4096 /V:vinay S:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 't':
    case 'T':
    system("format /FS:NTFS /Q /A:4096 /V:vinay T:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'u':
    case 'U':
    system("format /FS:NTFS /Q /A:4096 /V:vinay U:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'v':
    case 'V':
    system("format /FS:NTFS /Q /A:4096 /V:vinay V:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'w':
    case 'W':
    system("format /FS:NTFS /Q /A:4096 /V:vinay W:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'x':
    case 'X':
    system("format /FS:NTFS /Q /A:4096 /V:vinay X:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'y':
    case 'Y':
    system("format /FS:NTFS /Q /A:4096 /V:vinay Y:");
    printf("\n\n\t\t\t");
     main(); break;
      	case 'z':
    case 'Z':
    system("format /FS:NTFS /Q /A:4096 /V:vinay Z:");
    printf("\n\n\t\t\t");
     main(); break;
    default:
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\tInvalid Drive");
     Sleep(1000);
    system("cls");
    main();
}
}
void bootable()
{
	system("bootable.exe");
}
void binay()
{
	system("color 2");
		printf("\n\t\t\tDEVELOPED BY BINAYA GURUNG\n\n\t          FOR MORE INFO VINAYGURUNG.BLOGSPOT.COM");
}