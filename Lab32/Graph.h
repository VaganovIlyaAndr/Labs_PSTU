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

const int maxSize = 20;                      //������������ ����� ������
extern int WinW;
extern int WinH;
struct vertCoord		                     //��������� ��������� ������
{
	int x, y;
};

class Graph
{
private:
	vector<int> City;					 //������ ������
	int Table[maxSize][maxSize];		 //������� ���������
public:
	Graph();                                 //����������� (��������� ������� ��������� ������)
	~Graph();                                //���������� 
	bool IsEmpty();		                     //�������� �� �������
	bool IsFull();		                     //�������� �� �������

	int getVertText(int i) { return City[i]; }                               //�������� �������� �������
	vector<int> getCity() { return  City; }                              //�������� ������ ������
	int getTableElem(int i, int j) { return Table[i][j]; }               //�������� ������� ������� ���������
	void setEdgeZero(int i, int j) { Table[i][j] = 0; Table[j][i] = 0; } //�������� ������� ������� (��� ������������)
	int GetAmountVerts() { return City.size(); }                             //�������� ���������� ������ �����
	int GetVertPos(const int& vertex);		                                     //�������� ������� ������� � ������� ������
	int GetAmountEdges();                                                        //�������� ���������� ����� �����
	void InsertVertex(const int& vertex);					                     //�������� ������� (� ����� ������� ������)
	void InsertEdge(const int& vertex1, const int& vertex2, int weigth);	     //�������� ����� ����� weight ����� vertex1 � vertex2
	void Print();		                                                         //����� ������� ��������� � �������
	void eraseEdge(const int& vertex1, const int& vertex2);                      //������� ����� ����� vertex1 � vertex2
	void drawGraph();                                                            //���������� ����� OpenGL
};
extern Graph graph;		                                                         //��������� ������ ������ Graph

int** Make_TSPMatrix();	                                                         //��������� �������, ������� 0 �� -1
int* Find_Min(int* line, int n);	                                             //����� ������������ �������� � ������ �������
void Print_Matrix(int** matrix);		                                         //����� ������� �������
int** Reduct_Matrix(int** oldmatrix);		                                     //�������� �������
int** Rebuild_Matrix(int** oldmatrix);
void Print_Result();                                                             //����� ���������� ������� ������ ������������

void drawButton1();																//������� ����� ����
void drawButton2();																//������ ������ ����������
void drawButton3();																//����������� ������� ���������
void drawButton4();																//��������� ���� ����
void drawButton5();																//������� ����



void drawCircle(int x, int y, int R);                                            //��������� ����� 
void drawBorderedCircle(int x, int y, int R);                                    //��������� �����, ���� ������ � ���� �������
void drawText(int nom, int x1, int y1);                                          //��������� ���� �����
void drawLine(int text, int x0, int y0, int x1, int y1);                         //��������� ����� 
void drawVertex(int n);                                                          //��������� ������� 

void makeGraph();                                                                //�������� �����
void setCoords(int i, int n);                                                    //��������� ��������� ��� ������ �����

bool Salesman_Check(int** matrix);                                               //��������: ����� �� ������ ������ ������������
int Circle_Check(int x, int y);                                                  //��������: ������ � ���� ������� ��� ���
void Button_Check(int x, int y);                                                 //��������: ������ � ���� ������ ��� ���

void mouseMove(int x, int y);                                                    //������������ �������� ������� ����
void mouseClick(int button, int state, int x, int y);                            //������� ����������� ������� ����
void reshape(int w, int h);                                                      //�������� �� ���������������
void display();                                                                  //�������� �� ����������� 
