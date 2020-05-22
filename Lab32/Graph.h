#include <iostream>
#include <GLFW/glfw3.h>
#include <glut/Glut.h>
#include <glaux/glaux.h>
#include <windows.h>
#include <MMSystem.h>
#include <stdlib.h> 
#include <time.h>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

const int maxSize = 20;                      //максимальное число вершин
extern int WinW;
extern int WinH;
struct vertCoord		                     //структура координат вершин
{
	int x, y;
};

class Graph
{
private:
	vector<int> City;					 //вектор вершин
	int Table[maxSize][maxSize];		 //матрица смежности
public:
	Graph();                                 //конструктор (заполн€ет матрицу спежности нул€ми)
	~Graph();                                //деструктор 
	bool IsEmpty();		                     //проверка на пустоту
	bool IsFull();		                     //проверка на полноту

	int getVertText(int i) { return City[i]; }                               //получить значение вершины
	vector<int> getCity() { return  City; }                              //получить вектор вершин
	int getTableElem(int i, int j) { return Table[i][j]; }               //получить элемент матрицы смежности
	void setEdgeZero(int i, int j) { Table[i][j] = 0; Table[j][i] = 0; } //занулить элемент матрицы (дл€  оммиво€жера)
	int GetAmountVerts() { return City.size(); }                             //получить количество вершин графа
	int GetVertPos(const int& vertex);		                                     //получить позицию вершины в векторе вершин
	int GetAmountEdges();                                                        //получить количество ребер графа
	void InsertVertex(const int& vertex);					                     //добавить вершину (в конец вектора вершин)
	void InsertEdge(const int& vertex1, const int& vertex2, int weigth);	     //добавить ребро весом weight между vertex1 и vertex2
	void Print();		                                                         //вывод матрицы смежности в консоль
	void eraseEdge(const int& vertex1, const int& vertex2);                      //удалить ребро между vertex1 и vertex2
	void drawGraph();                                                            //рисоавание графа OpenGL
};
extern Graph graph;		                                                         //создаетс€ объект класса Graph

int** Make_TSPMatrix();	                                                         //создаетс€ матрица, замен€€ 0 на -1
int* Find_Min(int* line, int n);	                                             //поиск минимального элемента в строке матрицы
void Print_Matrix(int** matrix);		                                         //вывод текущей матрицы
int** Reduct_Matrix(int** oldmatrix);		                                     //редукци€ матрицы
int** Rebuild_Matrix(int** oldmatrix);
void Print_Result();                                                             //вывод результата решени€ задачи  оммиво€жера

void drawButton1();																//—оздать новый граф
void drawButton2();																//–ешить задачу  оммиво€жЄр
void drawButton3();																//–аспечатать матрицу смежности
void drawButton4();																//ѕроложить путь путь
void drawButton5();																//”далить путь



void drawCircle(int x, int y, int R);                                            //рисование круга 
void drawBorderedCircle(int x, int y, int R);                                    //рисование круга, если курсор в зоне вершины
void drawText(int nom, int x1, int y1);                                          //рисование веса ребра
void drawLine(int text, int x0, int y0, int x1, int y1);                         //рисование ребра 
void drawVertex(int n);                                                          //рисование вершины 

void makeGraph();                                                                //создание графа
void setCoords(int i, int n);                                                    //установка координат дл€ вершин графа

bool Salesman_Check(int** matrix);                                               //проверка: можно ли решить задачу  оммиво€жера
int Circle_Check(int x, int y);                                                  //проверка: курсор в зоне вершины или нет
void Button_Check(int x, int y);                                                 //проверка: курсор в зоне кнопки или нет

void mouseMove(int x, int y);                                                    //отслеживание движени€ курсора мыши
void mouseClick(int button, int state, int x, int y);                            //функци€ регистрации нажатий мыши
void reshape(int w, int h);                                                      //отвечает за масштабирование
void display();                                                                  //отвечает за изображение 
