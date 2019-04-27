#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
rectifier();
getch();
cleardevice();
return 0;
}
rectifier()
{
int choice;
float T2,T3,T4,T5,T6,V1,V2,V3,V4;
char v1[10],v2[10],t2[10],t3[10],t4[10],t5[10],t6[10];
printf("Enter the time period\n");
scanf("%f",&T3);
printf("Enter the peak voltage\n");
scanf("%f",&V1);
printf("\nRectification options\n\n1.Full Wave Rectification\n2.Half Wave Rectification\n");
printf("\nEnter your choice\n");
scanf("%d",&choice);
T2=0.5*T3;
T4=1.5*T3;
T5=2.0*T3;
T6=2.5*T3;
V2=0.5*V1;
clrscr();
cleardevice();
switch(choice)
{
case 1:
rectangle(70,56,575,162);         /*input graph body*/
outtextxy(70,75,"............ ............ ........... ............ ............");
outtextxy(70,102,"...............................................................");
outtextxy(70,130,"...............................................................");
outtextxy(160,55," .            .           .            .");
outtextxy(160,65," .            .           .            .");
outtextxy(160,75," .            .           .            .");
outtextxy(160,85," .            .           .            .");
outtextxy(160,95," .            .           .            .");
outtextxy(160,105," .            .           .            .");
outtextxy(160,115," .            .           .            .");
outtextxy(160,125," .            .           .            .");
outtextxy(160,135," .            .           .            .");
outtextxy(160,145," .            .           .            .");
outtextxy(160,155," .            .           .            .");

outtextxy(70,170,"0s");        /*input time axis*/
sprintf(t3,"%0.1fs",T3);
outtextxy(250,170,t3);
sprintf(t2,"%0.1fs",T2);
outtextxy(150,170,t2);
sprintf(t4,"%0.1fs",T4);
outtextxy(350,170,t4);
sprintf(t5,"%0.1fs",T5);
outtextxy(450,170,t5);
sprintf(t6,"%0.1fs",T6);
outtextxy(550,170,t6);
outtextxy(310,190,"Time");
outtextxy(0,100,"Vol");           /*input voltage axis*/
sprintf(v1,"-%0.1f",V1);
outtextxy(30,155,v1);
sprintf(v2,"-%0.1f",V2);
outtextxy(30,130,v2);
outtextxy(55,110,"0");
sprintf(v1,"%0.1f",V1);
outtextxy(40,50,v1);
sprintf(v2,"%0.1f",V2);
outtextxy(40,80,v2);
outtextxy(280,40,"INPUT SIGNAL");

setcolor(YELLOW);                /*input sinusoidal curve*/
arc(122,110,0,180,50);
arc(222,110,180,360,50);
arc(322,110,0,180,50);
arc(422,110,180,0,50);
arc(522,110,0,180,50);

setcolor(WHITE);
rectangle(70,248,575,352);         /*output graph body*/
outtextxy(70,270,"...............................................................");
outtextxy(70,295,"...............................................................");
outtextxy(70,320,"...............................................................");
outtextxy(160,250," .            .           .            .");
outtextxy(160,260," .            .           .            .");
outtextxy(160,270," .            .           .            .");
outtextxy(160,280," .            .           .            .");
outtextxy(160,290," .            .           .            .");
outtextxy(160,300," .            .           .            .");
outtextxy(160,310," .            .           .            .");
outtextxy(160,320," .            .           .            .");
outtextxy(160,330," .            .           .            .");
outtextxy(160,340," .            .           .            .");
setcolor(GREEN);
arc(122,300,0,180,50);             /*output full wave rectified curve*/
arc(222,300,0,180,50);
arc(322,300,0,180,50);
arc(422,300,0,180,50);
arc(522,300,0,180,50);
setcolor(WHITE);
outtextxy(70,360,"0s");              /*output time axis*/
sprintf(t3,"%0.1fs",T3);
outtextxy(250,360,t3);
sprintf(t2,"%0.1fs",T2);
outtextxy(150,360,t2);
sprintf(t4,"%0.1fs",T4);
outtextxy(350,360,t4);
sprintf(t5,"%0.1fs",T5);
outtextxy(450,360,t5);
sprintf(t6,"%0.1fs",T6);
outtextxy(550,360,t6);
outtextxy(310,380,"Time");
outtextxy(0,290,"Vol");          /*output voltage axis*/
sprintf(v1,"-%0.1f",V1);
outtextxy(30,345,v1);
sprintf(v2,"-%0.1f",V2);
outtextxy(30,320,v2);
outtextxy(55,300,"0");
sprintf(v1,"%0.1f",V1);
outtextxy(40,250,v1);
sprintf(v2,"%0.1f",V2);
outtextxy(40,275,v2);
outtextxy(210,230,"OUTPUT SIGNAL: FULL WAVE RECTIFIED");
break;
case 2:
rectangle(70,56,575,162);         /*input graph body*/
outtextxy(70,75,"............ ............ ........... ............ ............");
outtextxy(70,102,"...............................................................");
outtextxy(70,130,"...............................................................");
outtextxy(160,55," .            .           .            .");
outtextxy(160,65," .            .           .            .");
outtextxy(160,75," .            .           .            .");
outtextxy(160,85," .            .           .            .");
outtextxy(160,95," .            .           .            .");
outtextxy(160,105," .            .           .            .");
outtextxy(160,115," .            .           .            .");
outtextxy(160,125," .            .           .            .");
outtextxy(160,135," .            .           .            .");
outtextxy(160,145," .            .           .            .");
outtextxy(160,155," .            .           .            .");
outtextxy(70,170,"0s");               /*input time axis*/
sprintf(t3,"%0.1fs",T3);
outtextxy(250,170,t3);
sprintf(t2,"%0.1fs",T2);
outtextxy(150,170,t2);
sprintf(t4,"%0.1fs",T4);
outtextxy(350,170,t4);
sprintf(t5,"%0.1fs",T5);
outtextxy(450,170,t5);
sprintf(t6,"%0.1fs",T6);
outtextxy(550,170,t6);
outtextxy(310,190,"Time");
outtextxy(0,100,"Vol");               /*input voltage axis*/
sprintf(v1,"-%0.1f",V1);
outtextxy(30,155,v1);
sprintf(v2,"-%0.1f",V2);
outtextxy(30,130,v2);
outtextxy(55,110,"0");
sprintf(v1,"%0.1f",V1);
outtextxy(35,50,v1);
sprintf(v2,"%0.1f",V2);
outtextxy(35,80,v2);
outtextxy(280,40,"INPUT SIGNAL");

setcolor(YELLOW);                /*input sinusoidal curve*/
arc(122,110,0,180,50);
arc(222,110,180,360,50);
arc(322,110,0,180,50);
arc(422,110,180,0,50);
arc(522,110,0,180,50);

setcolor(WHITE);
rectangle(70,248,575,352);         /*output graph body*/
outtextxy(70,270,"...............................................................");
outtextxy(70,295,"...............................................................");
outtextxy(70,320,"...............................................................");
outtextxy(160,250," .            .           .            .");
outtextxy(160,260," .            .           .            .");
outtextxy(160,270," .            .           .            .");
outtextxy(160,280," .            .           .            .");
outtextxy(160,290," .            .           .            .");
outtextxy(160,300," .            .           .            .");
outtextxy(160,310," .            .           .            .");
outtextxy(160,320," .            .           .            .");
outtextxy(160,330," .            .           .            .");
outtextxy(160,340," .            .           .            .");
setcolor(GREEN);
arc(122,300,0,180,50);         /*output half wave rectified curve*/
arc(322,300,0,180,50);
arc(522,300,0,180,50);
setcolor(WHITE);
outtextxy(70,360,"0s");               /*output time axis*/
sprintf(t3,"%0.1fs",T3);
outtextxy(250,360,t3);
sprintf(t2,"%0.1fs",T2);
outtextxy(150,360,t2);
sprintf(t4,"%0.1fs",T4);
outtextxy(350,360,t4);
sprintf(t5,"%0.1fs",T5);
outtextxy(450,360,t5);
sprintf(t6,"%0.1fs",T6);
outtextxy(550,360,t6);
outtextxy(310,380,"Time");
outtextxy(0,290,"Vol");           /*output voltage axis*/
sprintf(v1,"-%0.1f",V1);
outtextxy(30,345,v1);
sprintf(v2,"-%0.1f",V2);
outtextxy(30,320,v2);
outtextxy(55,300,"0");
sprintf(v1,"%0.1f",V1);
outtextxy(35,250,v1);
sprintf(v2,"%0.1f",V2);
outtextxy(35,275,v2);
outtextxy(210,230,"OUTPUT SIGNAL: HALF WAVE RECTIFIED");
break;
default:
printf("Error\n");
}
getch();
return 0;
}
