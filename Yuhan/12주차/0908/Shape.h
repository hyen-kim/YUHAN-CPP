#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
	Shape* next;
protected:
	virtual void draw();
public:
	Shape();
	virtual ~Shape();
	void paint();
	Shape* add(Shape* p);
	Shape* getNext();
};

#endif // !SHAPE_H
