class Shape {
public:
    virtual ~Shape() {}
    virtual Shape* clone() const = 0;
};

class Rectangle : public Shape {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    Shape* clone() const override {
        // Write your code here
        Shape *newShape = new Rectangle(
            
         getWidth(),
         getHeight()
        );
        return newShape;
    }
};

class Square : public Shape {
private:
    int length;

public:
    Square(int l) : length(l) {}

    int getLength() const {
        return length;
    }

    Shape* clone() const override {
        // Write your code here
        Shape *newShape = new Square(getLength());
        return newShape;
    }
};

class Test {
public:
    vector<Shape*> cloneShapes(const vector<Shape*>& shapes) {
        // Write your code here
         vector<Shape *> cloned;
        for(int i = 0; i < shapes.size(); i++)
        {
            Shape* shape = shapes[i];
            Shape* newshape = shape->clone();
            cloned.push_back(newshape);    
        }
        return cloned;
    }
};
