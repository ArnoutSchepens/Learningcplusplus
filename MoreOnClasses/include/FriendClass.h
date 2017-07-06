
#ifndef MOREONCLASSES_FRIENDCLASS_H
#define MOREONCLASSES_FRIENDCLASS_H


class FriendClass
{
  private:
    int regVar;
  protected:
  
  public:
	FriendClass();
	
	friend void someFunc(FriendClass &obj);
};


#endif //MOREONCLASSES_FRIENDCLASS_H
