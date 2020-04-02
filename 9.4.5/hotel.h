/**
 * 符号常量和hotel.c中所有函数的原型
 */

#define QUIT   5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "****************************************"

/**
 * 显示选择列表
 * @return
 */
int menu(void);

/**
 * 返回预订天苏
 * @return
 */
int getNights(void);

/**
 * 根据费率和入住天数计算费用
 * @param rate   费率
 * @param nights 入住天数
 */
void showPrice(double rate, int nights);
