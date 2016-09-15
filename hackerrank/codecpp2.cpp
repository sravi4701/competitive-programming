template<class T>
        class AddElements{
                T element;
                public:
                        AddElements(T args){ element=args;}
                        T add(T addto) {return addto+element;}
                        T concatenate(T addto) { return element.append(addto);}
};
