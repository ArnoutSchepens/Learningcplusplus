
#ifndef INHERITANCE_POLYMORPHISM_ENEMY_H
#define INHERITANCE_POLYMORPHISM_ENEMY_H


class Enemy
{
  private:
  
  
  protected:
	int attackPower;
  
  public:
	void setAttackPower(int attackPower);
	virtual void attack() = 0;
};


#endif //INHERITANCE_POLYMORPHISM_ENEMY_H
