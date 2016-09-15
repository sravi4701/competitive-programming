class Student{
        private:
                int a,b,c,d,e;
        public:
                void Input()
                        {
                        cin>>a>>b>>c>>d>>e;
                }
                int CalculateTotalScore()
                        {
                        int s=a+b+c+d+e;
                        return s;
                }
};
