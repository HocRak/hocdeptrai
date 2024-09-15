#include<bits/stdc++.h>
#include<Graphics.h-main/>
using namespace std;
class TamGiac
{
private:
	float x1, y1, x2, y2, x3, y3;
public:
	TamGiac(float x1, float y1, float x2, float y2, float x3, float y3)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
		this->x3 = x3;
		this->y3 = y3;

	}
	void diem1(float x, float y)
	{
		x1 = x; y1 = y;
	}
	void diem1(float x, float y)
	{
		x2 = x; y2 = y;
	}
	void diem1(float x, float y)
	{
		x3 = x; y3 = y;
	}
	void xuat()
	{
		cout << "dinh 1: (" << x1 << "," << y1 << ")" << endl;
		cout << "dinh 2: (" << x2 << "," << y2 << ")" << endl;
		cout << "dinh 3: (" << x3 << "," << y3 << ")" << endl;

	}
	void tinhtien(float dx, float dy)
	{
		x1 += dx;
		y1 += dy;
		x2 += dx;
		y2 += dy;
		x3 += dx;
		y3 += dy;
	}
	void ve() 
	{
		int gd = DETECT, gm;
		initgraph(&gd, &gm, NULL);

		line(x1, y1, x2, y2);
		line(x2, y2, x3, y3);
		line(x3, y3, x1, y1);

		closegraph();
	}
};
	void quay(float goc) 
	{
		float radian = goc * 3.14 / 180.0;

		float x1New = x1 + (x1 - x1) * cos(radian) - (y1 - y1) * sin(radian);
		float y1New = y1 + (x1 - x1) * sin(radian) + (y1 - y1) * cos(radian);

		float x2New = x1 + (x2 - x1) * cos(radian) - (y2 - y1) * sin(radian);
		float y2New = y1 + (x2 - x1) * sin(radian) + (y2 - y1) * cos(radian);

		float x3New = x1 + (x3 - x1) * cos(radian) - (y3 - y1) * sin(radian);
		float y3New = y1 + (x3 - x1) * sin(radian) + (y3 - y1) * cos(radian);

		x1 = x1New;
		y1 = y1New;
		x2 = x2New;
		y2 = y2New;
		x3 = x3New;
		y3 = y3New;
	}
	void phongto(float heso)
	{
		x2 = x1 + (x2 - x1) * heso;
		y2 = y2 + (y2 - y1) * heso;

		x3 = x1 + (x3 - x1) * heso;
		y3 = y1 + (y3 - y1) * heso;
	}

	void thunho(float heso)
	{
		x2 = x1 + (x2 - x1) / heso;
		y2 = y2 + (y2 - y1) / heso;

		x3 = x1 + (x3 - x1) / heso;
		y3 = y1 + (y3 - y1) / heso;
	}



};