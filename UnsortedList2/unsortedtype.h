

#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

const int MAX_ITEMS=5;
template <class ItemType>
    
 class UnsortedType{
    public:
        UnsortedType();
        void makeEmpty();
        int lengthIs();
        bool isFull();
        void insertItem(ItemType);
        void deleteItem(ItemType);
        void retrieveItem(ItemType&,bool&);
        void resetList();
        void getNextItem(ItemType&);
        
    private:
            int length;
            ItemType data[MAX_ITEMS];
            int currentPosition;
      
        
};
    



#endif /* UNSORTEDTYPE_H */

