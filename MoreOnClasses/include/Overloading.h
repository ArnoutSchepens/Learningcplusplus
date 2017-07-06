
#ifndef MOREONCLASSES_OVERLOADING_H
#define MOREONCLASSES_OVERLOADING_H


class Overloading
{
  private:
	int var;
  protected:
  
  public:
	Overloading();
	
	Overloading(int a);
	
	int getVar();
	
	Overloading operator+(Overloading &obj);
	
};


#endif //MOREONCLASSES_OVERLOADING_H
