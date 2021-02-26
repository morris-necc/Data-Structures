class Box{

    //data members
    private: // access control: private, protected and public
        int length;
        int width;
        int height;
            //function members(methods)

    public:
        Box(); //default constructor
        Box(int l, int w, int h); //constructor

        int getLength(); // function prototype
        int getWidth();
        int getHeight();
        void setLength(int l);
        void setWidth(int w);
        void setHeight(int h);
        int calculateArea();
        int calculateVolume();

};