class Shape {
    private:
        double height;
        double width;
    public:
        Shape(double inwidth, double inheight);
        double getWidth();
        double getHeight();
        void setDimensions(double w, double h);
        double getArea();

};