class Rectangle{
                public:
                        int width,height;
                        void Display()
                                {
                                cout << width << " " << height <<endl;
                        }
};
class RectangleArea:public Rectangle {
        public:
                void Input()
                        {
                        cin>>width>>height;
                }
                void Display()
                        {
                        cout << width*height <<endl;
                }
};
