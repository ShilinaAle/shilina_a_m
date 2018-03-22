#include "level.h"
#include "ui_level.h"

#include<QGraphicsView>
#include<QDebug>

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    setFixedSize(545, 465);

    lose = new youlosewindow(this);


    rikki = new Rik();
    rikki->setPic();
    rikki->setZValue(1);
    ui->fieldLayout->addWidget(rikki, 2, 2);


    lbl0 = new celldraw*[8];
    readl = new Readlvl(1);

     for (int i = 0; i < 3; i+=1)
    {
        for (int j = 0; j < 3; j+=1)
        {
            lbl0[i*3+j]= new celldraw();

            switch(readl->getcell(i,j))
            {
            case 0:
                lbl0[i*3+j]->setPic(CL_CLEAR);
                break;
            case 1:
                lbl0[i*3+j]->setPic(CL_COOKIE);
                break;
            case 2:
                break;
            case 3:
                lbl0[i*3+j]->setPic(CL_BOMB);
                break;
            case 4:
                lbl0[i*3+j]->setPic(CL_BLACK);
                break;
            }

           ui->fieldLayout->addWidget(lbl0[i*3+j], i, j);
        }

    }
     //stepsCount = readl->countr->getsteps();
     stepsCount = readl->getstep(); //запрос допустимого количества шагов
     ui->stepsNumber->display(stepsCount);
    // cookieCount = readl->countr->getcookie();
     cookieCount = 0;
     ui->cookiesNumber->display(cookieCount); //количество собранного печенья

     movel = new int*[stepsCount + 1 ]; //матрица на первой строке которой будут передвижения Рикки
                                   // а на второй - откуда собрать или не собрать печенье
     for (int i = 0; i < stepsCount + 1; i++)
     {
         movel[i]  = new int[2] {-1};
     }

}

Level::~Level()
{
    delete ui;
}

void Level::on_upArrow_clicked()
{
    if (ind < stepsCount)
    {
        ind += 1;
        movel[ind][0] = 1;
    }
}

void Level::on_downArrow_clicked()
{
    if (ind < stepsCount)
    {
        ind += 1;
        movel[ind][0] = 2;
    }
}

void Level::on_leftArrow_clicked()
{
    if (ind < stepsCount)
    {
        ind += 1;
        movel[ind][0] = 3;
    }
}

void Level::on_rightArrow_clicked()
{
    if (ind < stepsCount)
    {
        ind += 1;
        movel[ind][0] = 4;
    }
}

void Level::on_jumpButton_clicked()
{
    if (ind < stepsCount)
    {
        ind += 1;
        movel[ind][0] = 5;
    }
}
void Level::on_backToChoose_clicked()
{
    this->close();
    emit chooseLevelWindow();
}

void Level::on_startMoveButton_clicked()
{

    readl->getmove(movel); //обработка перемещений

    for(int i = 0; i <= ind; i+=1) //реализация перемещений
    {
        if(movel[i][0]==0)
        {
            this->close();
            lose->show();
        } else
        {
            if(movel[i][0]==10)
            {
                this->close();
                //lose->show(); //окно победы?
            }
            /*if (movel[i][1] > -1)
            {
                lbl0[movel[i][1]]->clear();
                lbl0[movel[i][1]]->setPic(CL_CLEAR);
                cookieCount += 1;
                ui->cookiesNumber->display(cookieCount);
            }
*/
            switch (movel[i][0]) {
            case 1:
                rikki->moveRikki(M_UP);
                ui->stepsNumber->display(readl->getstep());
                break;
            case 2:
                rikki->moveRikki(M_DOWN);
                ui->stepsNumber->display(readl->getstep());
                break;
            case 3:
                rikki->moveRikki(M_LEFT);
                ui->stepsNumber->display(readl->getstep());
                break;
            case 4:
                rikki->moveRikki(M_RIGHT);
                ui->stepsNumber->display(readl->getstep());
                break;
            case 5:
                rikki->moveRikki(M_JUMP);
                ui->stepsNumber->display(readl->getstep());
                break;

            }

        }

        //rikki->moveRikki(moveList->at(i));
        //stepsCount -= 1;
        //ui->stepsNumber->display(stepsCount);

    }

}
