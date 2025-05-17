#include <ctime>
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>

// class Gaus
class Gaus {
public:
double h;   // Высота пика гауссовой функции
double x0;  // Координата x центра пика
double y0;  // Координата y центра пика
double sx;  // Стандартное отклонение по оси x (ширина) 
double sy;  // Стандартное отклонение по оси y (высота)

// Конструктор класса Gaus, который инициализирует параметры гауссовой функции
Gaus(double h, double x0, double y0, double sx, double sy)
      : h(h), x0(x0), y0(y0), sx(sx), sy(sy) {}//сама инициализация
};

//наше поле, на котором будет распределение
class Pole {
public:
  std::vector<std::vector<double>> field; //двумерный массив(?) vector-контейнер для последовательности элементов и имеет имя field

// Конструктор класса Pole, который инициализирует поле размером A x B
  Pole(int A, int B) { field.resize(A, std::vector<double>(B, 0)); }
};
