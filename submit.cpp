#include<graphics.h>
#include<stdio.h>

int main()

{
    initwindow(1280,720,"Ashiq");
    int s=0,a=0,h=0,v=0,m=0,n=0;
    char q[100];
    int countdown1=100,countdown2=100,countdown3=1;
        for(int i=countdown1;i>0;i--)
        {
/******** rasta shuru*******/
    setcolor(2);line(0,361,440,361);setcolor(4);line(0,359,440,359);setcolor(6);line(0,360,440,360);//middle_left-horai

    setcolor(2);line(641,0,641,220);setcolor(4);line(639,0,639,220);setcolor(6);line(640,0,640,220);//middle_up-ver

    setcolor(2);line(840,361,1280,361);setcolor(6);line(840,360,1280,360);setcolor(4);line(840,359,1280,359);//middle_right-horai

    setcolor(2);line(641,540,641,720);setcolor(6);line(640,540,640,720);setcolor(4);line(639,540,639,720);//middle_down-ver

    setcolor(10);line(0,261,440,261);setcolor(12);line(0,260,440,260);setcolor(14);line(0,259,440,259);//up-left-horai

    setcolor(10);line(840,261,1280,261);setcolor(12);line(840,260,1280,260);setcolor(14);line(840,259,1280,259);//up-right-horai

    setcolor(10);line(0,461,445,461);setcolor(12);line(0,460,445,460);setcolor(14);line(0,459,445,459);//down-left-horai

    setcolor(10);line(840,461,1280,461);setcolor(12);line(840,460,1280,460);setcolor(14);line(840,459,1280,459);//down-right-horai

    setcolor(10);line(541,0,541,160);setcolor(12);line(540,0,540,160);setcolor(14);line(539,0,539,160);//left-up-ver

    setcolor(10);line(741,560,741,720);setcolor(12);line(740,560,740,720);setcolor(14);line(739,560,739,720);//right-down-ver

    setcolor(10);line(741,0,741,152);setcolor(12);line(740,0,740,152);setcolor(14);line(739,0,739,152);//up-right-ver

    setcolor(10);line(540,555,540,720);setcolor(12);line(541,555,541,720);setcolor(14);line(539,555,539,720);//down-left-ver

    setcolor(13);arc(441,161,269,361,100);setcolor(14);arc(440,160,269,361,100);setcolor(12);arc(439,159,269,361,100);//up-left-arc

    setcolor(13);arc(838,158,175,632,100);setcolor(14);arc(840,160,175,632,100);setcolor(12);arc(839,159,175,632,100);//up-right-arc

    setcolor(13);arc(441,561,714,456,100);setcolor(14);arc(440,560,714,456,100);setcolor(12);arc(439,559,714,456,100);//down-left-arc

    setcolor(3);arc(841,561,805,545,100);setcolor(14);arc(840,560,805,545,100);setcolor(12);arc(839,559,805,545,100);//down-right-arc

    circle(640,360,25);setcolor(2);circle(640,360,24);setcolor(3);circle(640,360,23);setcolor(1);circle(640,360,22);setcolor(5);circle(640,360,21);circle(640,360,20);
    setcolor(4);circle(640,360,19);circle(640,360,18);setcolor(13);circle(640,360,17);circle(640,360,16);setcolor(12);circle(640,360,15);circle(640,360,14);
    setcolor(11);circle(640,360,13);circle(640,360,12);setcolor(10);circle(640,360,11);circle(640,360,10);setcolor(9);circle(640,360,9);circle(640,360,8);
    setcolor(8);circle(640,360,7);circle(640,360,6);setcolor(7);circle(640,360,5);circle(640,360,4);setcolor(6);circle(640,360,3);circle(640,360,2);setcolor(1);
    circle(640,360,1);//mid-circle
    /***********rasta sesh*********/
    /*****lights******/
            setcolor(2);rectangle(400,10,500,210);circle(450,100,50);setfillstyle(1,2);floodfill(452,100,2);//up-left-light

            setcolor(4);rectangle(780,260,880,360);circle(830,310,50);setfillstyle(1,4);floodfill(832,308,4);//up=right-light

            setcolor(4);rectangle(400,360,500,460);circle(450,410,50);setfillstyle(1,4);floodfill(452,408,4);//down-left-light

            setcolor(2);rectangle(780,500,880,700);circle(830,600,50);setfillstyle(1,2);floodfill(832,602,2);//down-right-light
            /**********/
            delay(100);
            graphdefaults();
            cleardevice();

    /******lekha*****/
            setcolor(14);
            settextstyle(8,HORIZ_DIR,3);
            sprintf(q,"Up & Down Running more %d second..",i);
            outtextxy(780,20,q);
            setcolor(14);
            settextstyle(10,HORIZ_DIR,3);
            outtextxy(780,50,"Left & Right is now STOPED");
            settextstyle(8,HORIZ_DIR,3);
            sprintf(q,"Up & Down Running more %d second..",i);
            outtextxy(20,520,q);
            settextstyle(10,HORIZ_DIR,3);
            outtextxy(20,550,"Left & Right is now STOPED");
            graphdefaults();
    /******************/



   /****gari 1 ********/
            line(80,400,200,400);
            line(200,400,200,424);
            line(80,400,80,450);
            line(80,450,96,450);
            line(124,450,156,450);
            line(186,450,200,450);
            circle(132,442,5);
            circle(132,442,4);
            circle(152,442,5);
            circle(152,442,4);
            rectangle(90,415,190,430);
            line(100,422,185,422);
            rectangle(85,410,195,435);
            rectangle(205,430,230,445);
            circle(112,450,8);
            circle(172,450,10);
            circle(112,450,10);
            circle(172,450,8);
            circle(210,418,5);
            floodfill(211,419,15);
            circle(210,418,4);
            rectangle(200,425,235,450);
            line(200,400,235,425);
            /********/
   /******gari 2******/
            circle(1110,320,10);
            circle(1170,320,10);
            circle(1110,320,8);
            circle(1170,320,8);
            line(1122,320,1158,320);
            line(1050,320,1098,320);
            line(1182,320,1215,320);
            line(1110,270,1170,270);
            line(1110,270,1110,300);
            line(1110,300,1050,300);
            rectangle(1115,275,1170,295);
            line(1110,300,1185,300);
            circle(1103,289,2);
            circle(1103,289,1);
            circle(1103,289,3);
            line(1050,300,1050,320);
            line(1050,300,1080,300);
            line(1080,300,1110,270);
            line(1215,320,1215,290);
            line(1215,290,1190,290);
            line(1170,270,1190,290);
            rectangle(1185,293,1212,317);
            /************/
    /*******gari 3*******/
            bar(560,630+h,610,690+h);
            line(560,630+h,570,605+h);
            line(610,630+h,595,605+h);
            line(570,605+h,595,605+h);
            line(565,700+h,605,700+h);
            line(565,700+h,560,690+h);
            line(610,690+h,605,700+h);
            h=h-4;
            /**********/
    /********gari 4*******/
            bar(670,50+v,720,120+v);
            line(680,145+v,710,145+v);
            line(670,120+v,680,145+v);
            line(720,120+v,710,145+v);
            line(675,40+v,715,40+v);
            line(675,40+v,670,50+v);
            line(720,50+v,715,40+v);
            v=v+4;
            /***********/
    /*******manush 1***/
            setcolor(10);
            circle(950,400+m,15);line(950,415+m,950,460+m);line(950,460+m,930,480+m);line(950,460+m,970,480+m);line(950,430+m,930,450+m);line(950,430+m,970,450+m);
            m=m-2;
            /*************/
    /*******manush 2*******/
            setcolor(11);
            circle(1000,400+n,15);line(1000,415+n,1000,460+n);line(1000,460+n,980,480+n);line(1000,460+n,1020,480+n);line(1000,430+n,980,450+n);line(1000,430+n,1020,430+n);
            n=n-3;
            ///*************///
        }

        for(int j=countdown2;j>0;j--)
        {


            /******** rasta shuru*******/
    setcolor(2);line(0,361,440,361);setcolor(4);line(0,359,440,359);setcolor(6);line(0,360,440,360);//middle_left-horai

    setcolor(2);line(641,0,641,220);setcolor(4);line(639,0,639,220);setcolor(6);line(640,0,640,220);//middle_up-ver

    setcolor(2);line(840,361,1280,361);setcolor(6);line(840,360,1280,360);setcolor(4);line(840,359,1280,359);//middle_right-horai

    setcolor(2);line(641,540,641,720);setcolor(6);line(640,540,640,720);setcolor(4);line(639,540,639,720);//middle_down-ver

    setcolor(10);line(0,261,440,261);setcolor(12);line(0,260,440,260);setcolor(14);line(0,259,440,259);//up-left-horai

    setcolor(10);line(840,261,1280,261);setcolor(12);line(840,260,1280,260);setcolor(14);line(840,259,1280,259);//up-right-horai

    setcolor(10);line(0,461,445,461);setcolor(12);line(0,460,445,460);setcolor(14);line(0,459,445,459);//down-left-horai

    setcolor(10);line(840,461,1280,461);setcolor(12);line(840,460,1280,460);setcolor(14);line(840,459,1280,459);//down-right-horai

    setcolor(10);line(541,0,541,160);setcolor(12);line(540,0,540,160);setcolor(14);line(539,0,539,160);//left-up-ver

    setcolor(10);line(741,560,741,720);setcolor(12);line(740,560,740,720);setcolor(14);line(739,560,739,720);//right-down-ver

    setcolor(10);line(741,0,741,152);setcolor(12);line(740,0,740,152);setcolor(14);line(739,0,739,152);//up-right-ver

    setcolor(10);line(540,555,540,720);setcolor(12);line(541,555,541,720);setcolor(14);line(539,555,539,720);//down-left-ver

    setcolor(13);arc(441,161,269,361,100);setcolor(14);arc(440,160,269,361,100);setcolor(12);arc(439,159,269,361,100);//up-left-arc

    setcolor(13);arc(838,158,175,632,100);setcolor(14);arc(840,160,175,632,100);setcolor(12);arc(839,159,175,632,100);//up-right-arc

    setcolor(13);arc(441,561,714,456,100);setcolor(14);arc(440,560,714,456,100);setcolor(12);arc(439,559,714,456,100);//down-left-arc

    setcolor(3);arc(841,561,805,545,100);setcolor(14);arc(840,560,805,545,100);setcolor(12);arc(839,559,805,545,100);//down-right-arc

    circle(640,360,25);setcolor(2);circle(640,360,24);setcolor(3);circle(640,360,23);setcolor(1);circle(640,360,22);setcolor(5);circle(640,360,21);circle(640,360,20);
    setcolor(4);circle(640,360,19);circle(640,360,18);setcolor(13);circle(640,360,17);circle(640,360,16);setcolor(12);circle(640,360,15);circle(640,360,14);
    setcolor(11);circle(640,360,13);circle(640,360,12);setcolor(10);circle(640,360,11);circle(640,360,10);setcolor(9);circle(640,360,9);circle(640,360,8);
    setcolor(8);circle(640,360,7);circle(640,360,6);setcolor(7);circle(640,360,5);circle(640,360,4);setcolor(6);circle(640,360,3);circle(640,360,2);setcolor(1);
    circle(640,360,1);//mid-circle
    /***********rasta sesh*********/
    /********lights*****/
            setcolor(2);rectangle(780,10,880,210);circle(830,100,50);setfillstyle(1,2);floodfill(832,98,2);

            setcolor(2);rectangle(400,500,500,700);circle(450,600,50);setfillstyle(1,2);floodfill(452,602,2);

            setcolor(4);rectangle(640,160,740,260);circle(690,210,50);setfillstyle(1,4);floodfill(692,208,4);

            setcolor(4);rectangle(540,500,640,600);circle(590,550,50);setfillstyle(1,4);floodfill(592,548,4);
            /************/
            graphdefaults();
            delay(100);
            cleardevice();


    /******lekha*****/
            setcolor(12);
            settextstyle(8,HORIZ_DIR,3);
            sprintf(q,"Left&Right stop within %d sec..",j);
            outtextxy(20,200,q);
            setcolor(9);
            settextstyle(4,HORIZ_DIR,3);
            outtextxy(20,150,"Up & Down is now Stoped");

            setcolor(12);
            settextstyle(8,HORIZ_DIR,3);
            sprintf(q,"Left&Right stop within %d sec..",j);
            outtextxy(780,550,q);
            setcolor(9);
            settextstyle(4,HORIZ_DIR,3);
            outtextxy(770,500,"Up & Down is now Stoped");
            graphdefaults();
            /***************/

            //graphdefaults();

    /*****gari 3****/
    bar(560,630,610,690);
    line(560,630,570,605);
    line(610,630,595,605);
    line(570,605,595,605);
    line(565,700,605,700);
    line(565,700,560,690);
    line(610,690,605,700);
    /******/
    /*******gari 4********/
    bar(670,50,720,120);
    line(680,145,710,145);
    line(670,120,680,145);
    line(720,120,710,145);
    line(675,40,715,40);
    line(675,40,670,50);
    line(720,50,715,40);
    /*************/
    /*****gari 1*******/
    line(80+a,400,200+a,400);
    line(200+a,400,200+a,424);
    line(80+a,400,80+a,450);
    line(80+a,450,96+a,450);
    line(124+a,450,156+a,450);
    line(186+a,450,200+a,450);
    circle(132+a,442,5);
    circle(132+a,442,4);
    circle(152+a,442,5);
    circle(152+a,442,4);
    rectangle(90+a,415,190+a,430);
    line(100+a,422,185+a,422);
    rectangle(85+a,410,195+a,435);
    rectangle(205+a,430,230+a,445);
    circle(112+a,450,8);
    circle(172+a,450,10);
    circle(112+a,450,10);
    circle(172+a,450,8);
    circle(210+a,418,5);
    floodfill(211+a,419,15);
    circle(210+a,418,4);
    rectangle(200+a,425,235+a,450);
    line(200+a,400,235+a,425);

    a=a+4;
    /****************/
    /*********gari 2******/
    circle(1110+s,320,10);
    circle(1170+s,320,10);
    circle(1110+s,320,8);
    circle(1170+s,320,8);
    line(1122+s,320,1158+s,320);
    line(1050+s,320,1098+s,320);
    line(1182+s,320,1215+s,320);
    line(1110+s,270,1170+s,270);
    line(1110+s,270,1110+s,300);
    line(1110+s,300,1050+s,300);
    rectangle(1115+s,275,1170+s,295);
    line(1110+s,300,1185+s,300);
    circle(1103+s,289,2);
    circle(1103+s,289,1);
    circle(1103+s,289,3);
    line(1050+s,300,1050+s,320);
    line(1050+s,300,1080+s,300);
    line(1080+s,300,1110+s,270);
    line(1215+s,320,1215+s,290);
    line(1215+s,290,1190+s,290);
    line(1170+s,270,1190+s,290);
    rectangle(1185+s,293,1212+s,317);

    s=s-4;
      }
    /********************/
    for(int k=countdown3;k>0;k--)
    {
            graphdefaults();
            delay(100);
            cleardevice();
            settextstyle(9,HORIZ_DIR,8);
            outtextxy(400,300,"Thank You");
            outtextxy(200,400,"Traffic Control Unit");
    }
 getch();
}





