#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


int main(void)
{
  
    int errorcode;

    int lat = 640 ;                            // dimensiunea ferestrei
    int inalt = 500;
    	
    initwindow(lat,inalt,"Succes !");	      // initializare mod grafic
    
    errorcode = graphresult(); // se verifica aparitia eventualelor erori
    if (errorcode != grOk)
    {
            printf("Eroare grafica: %s\n", grapherrormsg(errorcode));
	      printf("Apasati orice tasta....");
	      getch();
	      exit(1);
   	}	

/* Aici se insereaza in fisierul sursa nou creat codul pentru aplcatia   curenta, dupa ajustarea corespunzatoare a dimensiunilor noii ferestre cu care se lucreaza */
     
    
	setcolor(WHITE);
	circle(lat/2,200,150);
	circle(149,180,20);
	circle(488,180,20);
	ellipse(250,180,0,360,30,50);
	ellipse(390,180,0,360,30,50);
	setfillstyle(SOLID_FILL,WHITE);
	fillellipse(262,180,16,20);
	fillellipse(378,180,16,20);
	pieslice(lat/2,190,260,280,60);
	setfillstyle(EMPTY_FILL,BLACK);
	arc(lat/2,200,240,300,100);
	moveto(320,50);
	lineto(320,20);
	line(280,55,270,25);
	moverel(50,5);
	lineto(355,55);

	rectangle(200,400,460,460);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	outtextxy(205,410," SUCCES !");

	getch();                       // blocheaza ecranul consolei pana la actionarea unei taste
    closegraph();
    
    return 0;   
}



