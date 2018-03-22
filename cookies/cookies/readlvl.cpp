#include "readlvl.h"
#include <stdexcept>

Readlvl::Readlvl(int numlvl)
{
    if (numlvl <= 0)
    { throw std::invalid_argument("Error: Number of level can't be less or equals 0"); }
    else
    {
        if (numlvl <= 3) //создание поля 3*3
        {
            countcell = 9;
            nx_ = 3;
            cells.resize(countcell);
        }
        if ((numlvl >= 4)&(numlvl <= 5)) {   //создание поля 4*4
            countcell = 16;
            nx_ = 4;
            cells.resize(countcell);
        }
    }
    //countr = new Counters();
    fullarray(numlvl); //заполнение массива клеток поля
}
void Readlvl::fullarray(int numlvl) //считывание с файла, заполнение массива
{
        QFile file("level.txt");
        if(file.open(QIODevice::ReadOnly |QIODevice::Text))
        {
            while(!file.atEnd())
            {

                QString str = file.readLine();//читаем стрку
                QStringList lst = str.split(" "); //делим строку на слова разделенные пробелом
                if (lst.at(0).toInt() == numlvl) // ищем строку с нужным уровнем int lvl
                {
                    countstep = lst.at(1).toInt(); //второе значение - максимально допустимое количество шагов
                    allcookie = lst.at(2).toInt(); //третье значение - всего печений на поле
                    for (int i = 0; i < countcell - 1; i+=1)
                    {
                        cells[i] = lst.at(i+3).toInt();
                    }
                }
            }


        }
        else
        {
           throw std::invalid_argument("Error: file didn't open");
        }
        file.close();

}

int Readlvl::getcell(int x, int y) //значение клетки поля по координатам
{
    if ((x < 0) | (y < 0))
    { throw std::invalid_argument("Error: Coordinate can't be less 0"); }

    return cells[y*nx_ + x];
}

int Readlvl::getstep() //количество оставшихся допустимых ходов
{
    return countstep;
}

void Readlvl::getmove(int **arr) //обработка алгоритма передвижений Рикки
{
    if (countcell == 9) //если поле 3*3
    {
        int step = 8; //положение Рикки на поле
        for (int i = 0; i < countstep; i++)
        {

            //if (arr[i-1] == 0)
              //  break;
            if (cells[step] > 1) //проверка на черную клетку или клетку с бомбой
            {
                arr[i][0] = 0; //0 значит проигрыш
                break;
            }

            if (cells[step] == 1) //если на клетке печенье - собрать
            {
                arr[i][1] = step; //координата печенья
                allcookie -= 1; //уменьшаем счетчик
            }

            if (allcookie == 0) //не собраны ли все печенья
            {
                arr[i+1][0] = 10; // win
                break;
            }

            switch(arr[i][0])
            {
            case 1:
                if (step % 3 == 0)
                { arr[i][0] = 0;

                }
                countstep -=1;
                step = step - 1;
                break;
            case 2:
                if ((step + 1) % 3 == 0)
                { arr[i][0] = 0;
                }
                countstep -=1;
                step = step + 1;
                break;
            case 3:
                if (step < 3)
                { arr[i][0] = 0;
                }
                countstep -=1;
                step = step - 3;
                break;
            case 4:
                if (step > 5)
                { arr[i][0] = 0;
                }
                countstep -=1;
                step = step + 3;
                break;
            case 5:
                if ((step + 1) % 3 != 0)
                { arr[i][0] = 0;
                }
                countstep -=1;
                step = step - 2;
                break;
            }

        }

    }

}
