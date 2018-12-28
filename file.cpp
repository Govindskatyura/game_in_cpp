#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<ctype.h>

void scre();
void boundrey();
void moveright(int,int);
int pac(int,int);
void moveleft(int,int);
void moveup(int,int);
void movedown(int,int);
int exiti(int,int);
void close(void);
void close()
{
	cleardevice();
	setcolor(YELLOW);
	setlinestyle(1,3,2);
	rectangle(120,180,550,220);
	setcolor(BLUE);
	rectangle(140,160,530,240);
	setcolor(10);
	 settextstyle(3,HORIZ_DIR,1);
	 setcolor(RED);
	outtextxy(150,185,"thank you for playing katyura's first game");
	nosound();
	getch();
	exit(0);
};

 void pcaa();
 void pcaa()
 {
 int x,y,ch;
  x=0,y=0;
  cleardevice();
   outtextxy(100,100,"press any key to start");
  setbkcolor(CYAN);
 pac :
  while(kbhit())
  {
   ch=getch();

   //left
   scre();
   if(ch==97)
   {
    x=x-2;
    sound(1);
    moveleft(x,y);
   }
  // right
   if(ch==100)
   {
    x=x+2;
    sound(2);
    moveright(x,y);
   }
   //up
   if(ch==119)
   {
    y=y-2;
    sound(3);
    moveup(x,y);
   }
   //down
   if(ch==115)
   {
    y=y+2;
    sound(4);
    movedown(x,y);
   }
   if(ch==27)
     {
      close();
      }
      if(ch=='9')
      {
      nosound();
      goto pac;
      }

  }
  goto pac;
  }

void main()
{
 int gd=DETECT,gm;

 initgraph(&gd,&gm,"C://TC/BGI");
// pac(1,1);
// int ch;
 pcaa();
 closegraph();
}
// scrreen element
void scre()
 {
 // nosound();
   settextstyle(1,1,1);
   settextstyle(8,HORIZ_DIR,1);
    outtextxy(50,20,"d for right");
    outtextxy(50,40,"a for left");
    outtextxy(360,40,"s for down");
    outtextxy(360,20,"w for up");
    outtextxy(260,430,"esc for exit");
  }
// right movement
 void moveright(int x,int y)
{
 int exi,ch;
 sound(1);
 cleardevice();
 scre();
 boundrey();
 setcolor(WHITE);
 while(!kbhit())
 {
 cleardevice();
  scre();
 boundrey();
 exiti(x,y);
setcolor(WHITE);
 sector(320+(x),240+(y),30,330,15,15);
 x=x+2;
 delay(60);

 }
  pac :
  while(kbhit())
  {
   ch=getch();
   settextstyle(1,HORIZ_DIR,4);

   //left
   scre();
   if(ch==97)
   {
    x=x-2;
    moveleft(x,y);
   }
  // right
   if(ch==100)
   {
    x=x+2;
    moveright(x,y);
   }
   //up
   if(ch==119)
   {
    y=y-2;
    moveup(x,y);
   }
   //down
   if(ch==115)
   {
    y=y+2;
    movedown(x,y);
   }
   if(ch==27)
     {  nosound();
	close();
      }

  }
  goto pac;
}

// left moment
void moveleft(int x,int y)
{
 int exi,ch;
 sound(2);
 while(!kbhit())
 {
 cleardevice();
  scre();
 boundrey();
 exiti(x,y);
 setcolor(WHITE);
  sector(320+(x),240+(y),150,0,15,15);
 sector(320+(x),240+(y),210,360,15,15);
 x=x-2;
 delay(60);

 }
  pac :
  while(kbhit())
  {
   ch=getch();
   settextstyle(1,HORIZ_DIR,4);

   //left
   scre();
   if(ch==97)
   {
    x=x-2;
    moveleft(x,y);
   }
  // right
   if(ch==100)
   {
    x=x+2;
    moveright(x,y);
   }
   //up
   if(ch==119)
   {
    y=y-2;
    moveup(x,y);
   }
   //down
   if(ch==115)
   {
    y=y+2;
    movedown(x,y);
   }
   if(ch==27)
     {
     nosound();
	close();
      }

  }
  goto pac;
}
//up moment
void moveup(int x,int y)
{ int exi=1,ch;
sound(3);
   while(!kbhit())
 {
 cleardevice();
  scre();
 boundrey();
 exiti(x,y);
 setcolor(WHITE);
  sector(320+(x),240+(y),0,70,15,15);
 sector(320+(x),240+(y),120,360,15,15);
 y=y-2;
 delay(60);

 }
  pac :
  while(kbhit())
  {
   ch=getch();
	settextstyle(1,HORIZ_DIR,4);

   //left
   scre();
   if(ch==97)
   {
    x=x-2;
    moveleft(x,y);
   }
  // right
   if(ch==100)
   {
    x=x+2;
    moveright(x,y);
   }
   //up
   if(ch==100)
   {
    y=y-2;
    moveup(x,y);
   }
   //down
   if(ch==115)
   {
    y=y+2;
    movedown(x,y);
   }
   if(ch==27)
     {
     nosound();
     close();
      }

  }
  goto pac;

}
// down moment
void movedown(int x,int y)
{
 int ex,ch;
 sound(4);
 while(!kbhit())
 {
 cleardevice();
  scre();
 boundrey();
 exiti(x,y);
 setcolor(WHITE);
  sector(320+(x),240+(y),0,220,15,15);
 sector(320+(x),240+(y),300,360,15,15);
 y=y+2;
 delay(60);

 }
  pac :
  while(kbhit())
  {
   ch=getch();
   settextstyle(1,HORIZ_DIR,4);

   //left
   scre();
   if(ch==97)
   {
    x=x-2;
    moveleft(x,y);
   }
  // right
   if(ch==100)
   {
    x=x+2;
    moveright(x,y);
   }
   //up
   if(ch==119)
   {
    y=y-2;
    moveup(x,y);
   }
   //down
   if(ch==115)
   {
    y=y+2;
    movedown(x,y);
   }
   if(ch==27)
     {  nosound();
	close();
      }

  }
  goto pac;

}
void boundrey()
{
   setlinestyle(1,3,2);
   setcolor(RED);
   /*setfillstyle(1,RED);
   floodfill(50,100,RED); */
   rectangle(50,100,600,400);
    rectangle(40,80,610,420);
}
int exiti(int a,int e)
{
  int ch;
  nosound();
 if(a==250)
 {
  cleardevice();
   settextstyle(7,HORIZ_DIR,1);
  outtextxy(200,100,"game over");
  getch();
  outtextxy(80,140,"preess  any key to close and backspace for restart");
  getch();
  ch=getch();
   if(ch==8)
      {
      pcaa();
      }
      close();
  closegraph();
 }
 if(a==-250)
   {
  cleardevice();
   settextstyle(7,HORIZ_DIR,1);
  outtextxy(200,100,"game over");
  getch();
    outtextxy(80,140,"preess  any key to close and backspace for restart");
  getch();
  ch=getch();
   if(ch==8)
      {
      pcaa();
      }
      close();
  closegraph();
 }
 if(e==150)
  {
  cleardevice();
   settextstyle(7,HORIZ_DIR,1);
  outtextxy(200,100,"game over");
  getch();
  outtextxy(80,140,"preess  any key to close and backspace for restart");
  getch();
  ch=getch();
   if(ch==8)
      {
      pcaa();
      }
      close();
  closegraph();
 }
 if(e==-130)
  {
  cleardevice();
   settextstyle(7,HORIZ_DIR,1);
  outtextxy(200,100,"game over");
  getch();
  outtextxy(80,140,"preess  any key to close and backspace for restart");
  getch();
  ch=getch();
   if(ch==8)
      {
      pcaa();
      }
      close();
  closegraph();
 }
 else
  return(0);
}
