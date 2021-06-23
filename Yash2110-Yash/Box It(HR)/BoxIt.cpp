
//Implement the class Box  
class Box
{
    private:
        int l,b,h;  //l,b,h are integers representing the dimensions of the box

 
    public:
    
        //Default Constructor 
         
        Box()
        {
            l=0;
            b=0;
            h=0;
        }
        
        //Parameterized Constructor

        Box(int x,int y,int z)
        {
            this->l = x;
            this->b = y;
            this->h = z;
        }

        //copy constructor
        
        Box(Box & obj)
        {
            l=obj.l;
            b=obj.b;
            h=obj.h;
        }
        
       
        int getLength() const
        {
            return l;
        }
        
        int getBreadth() const
        {
            return b;
        }
        
        int getHeight() const
        {
            return h;
        }
    
        long long CalculateVolume()
        {
            return long(l)*long(b)*long(h); 
        }

        //overloading < operator
        
        bool operator<(Box& b)
        {
            if (this->l < b.l)
            {
                return true;
            }
            else if(this->b < b.b && this->l == b.l)
            {
                return true;
            }
            else if(this->h < b.h && this->b == b.b && this-> l == b.l)
            {
                return true;
            }
            else 
            return false;
        }    
        
        //overloading << operator

        

        friend ostream& operator<<(ostream& out, Box& B)
        {
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }



// Box(Box);
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};
