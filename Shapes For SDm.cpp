#include<iostream>
using namespace std;

class Point{
	int xcoordinate;
	int ycoordinate;
	public:
	Point(){
		xcoordinate = 0;
		ycoordinate = 0;
	}
	Point(int x, int y){
		xcoordinate = x;
		ycoordinate = y;
	}
	public:
	void display(){
		cout<<"x-coordinate is : "<<xcoordinate<<endl;
		cout<<"y-coordinate is : "<<ycoordinate<<endl;
		}
};
class Shape{
	//char color[];
	int thickness;
	public:
		Shape(){
			thickness = 0;
		}
		Shape(int th){
			thickness = th;
		}
		void set_thik(){
			cout<<"Enter Thickness : "<<endl;
			cin>>thickness;
		}
		void display(){
			cout<<"Thickness is : "<<thickness<<endl;
		}
};

class Line:public Point, Shape{
//	int x1,x2,y1,y2;
	Point x1;
	Point y1;
	
	public:
	Line(){
		x1 = 0;
		y1 = 0;
		x2 = 0;
		y2 = 0;
	}
	Line(int xc1, int xc2, int yc1, int yc2){
		x1 = xc1;
		x2 = xc2;
		y1 = yc1;
		y2 = yc2;
	}
	void display(){
		cout<<"Start Point of Line : "<<x1<<","<<y1<<endl;
		cout<<"End Point of Line : "<<x2<<","<<y2<<endl;
		Shape::set_thik();
		Shape::display();
	}
};

class Rectangle:public Shape{
	int length;
	int breadth;
	public:
		Rectangle(){
			length = 0;
			breadth = 0;
		}
		Rectangle(int l, int b){
			length = l;
			breadth = b;
		}
		void display(){
			Shape::set_thik();
			Shape::display();
			cout<<"Length of Rectangle is : "<<length<<endl;
			cout<<"Breadth of Rectangle is : "<<breadth<<endl;
			
			cout<<"Area of Rectangle is : "<<length * breadth<<endl;

		}
};

class Circle: public Point, Shape{
	float pi = 3.14f;
	int radius;
	public:
		Circle(){
			radius = 0;
		}
		Circle(int r){
			radius = r;
		}
		void display(){
			Shape::set_thik();
			Shape::display();
			cout<<"Area of circle is : "<<2 * pi * radius<<endl;
		}
		
};

int main(){
	int option;
	cout<<"1 : Point \t"<<"2 : line \t"<<"3: Rectangle \t"<<"4 : Circle \t"<<endl;
	cout<<"Enter Option : "<<endl;
	cin>>option;
	switch(option){
		case 1 :
			{
			
			Point p1(10,20);
			p1.display();
			break;
		}
		case 2 :
			{
			Line l1(10,30,20,40);
			l1.display();
			break;
		}
		case 3 :
			{
			Rectangle r1(10,20);
			r1.display();
		}
		case 4 : 
			{
			Circle c1(3);
			c1.display();
		}
	}

	/*Line l1(10,30,20,40);
	l1.display();
	Rectangle r1(10,20);
	r1.display();
	Circle c1(3);
	c1.display();*/
	
	
}

