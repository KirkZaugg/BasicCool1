class shape {
    private:
        double height;
        double width;
    public:
        shape(double inwidth, double inheight);
        double getWidth();
        double getHeight();
        void setDimensions(double w, double h);
        double getArea();

};