#include <iostream>
#include <string.h>
// double xiaoshujiajian(double y, double f)
// {
//     return y + f;
// }

// int jiafa(int x, int y)
// {
//     return x + y;
// }
// std::string kanshuchang(std::string 1,std::string2, int 3,int4,string5,string6,string7,int8,int9)
// {
//     if (j == "房产")
//     {
//         return "房产大户";
//     }
//     else
//     {
//         return "渣渣";
//     }
// // }
// void player(std::string N, std::string B, int V, int C, std::string X, std::string A, std::string S, int d, int f)
// {
//     std::cout << "角色姓名" << N << std::endl;
//     std::cout << "种族" << B << std::endl;
//     std::cout << "战斗力" << V << std::endl;
//     std::cout << "实际战斗力" << C << std::endl;
//     std::cout << "角色介绍" << X << std::endl;
//     std::cout << "武器" << A << std::endl;
//     std::cout << "克制" << S << std::endl;
//     std::cout << "被克制" << S << std::endl;
//     std::cout << "生命" << d << std::endl;
//     std::cout << "抵抗血量" << f << std::endl;
// }
// void swap(int **a, int **b)
// {
//     int *temp = *jntm;
//     *jntm = *qiaobiluo;
//     *qiaobiluo = temp;

// }

void 作业1()
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 8 - 2; i >= 0; i--)
    {
        for (int j = 0; j < (8 - i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void 作业2()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void 作业3()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main() //之前写这个第一个括号总会报错,只能重新复制一个
{

    // scanf("%d", &N);

    //     if (i == k)
    //     {
    //         printf("\n");
    //         k++;
    //         i = 0;
    //     }
    //     else
    //         printf("+");
    // return 0;

    // b = new int(20);
    // std::cout << "" << sizeof(&jntm) << " jntm:" << &jntm << std::endl;
    // std::cout << "万恶之源鸡你太美发源地:" << sizeof(jntm) << " 鸡你太美指向的乔碧萝:" <<jntm << std::endl;
    // std::cout << "万恶之源鸡你太美大小:" << sizeof(*a) << " 万恶之源鸡你太美指向乔碧萝:" << *jntm << std::endl;
    // delete a;
    // a = nullptr;
    // reaturn 0;
    // system("chcp 65001");
    // system("cls");
    // int a, b;
    // int *pi;
    // pi = &a;
    // &a = &b; //这个是不行的，&a是个co
    // &b = pi; //&b也是个const

    // void swapp(int **p1, int **p2)
    // {
    //     int *t;
    //     t = *p1;
    //     *p1 = *p2;
    //     *p2 = t;
    // }
    // int main()
    // {

    //     int a = 1, b = 2;
    //     int *p1 = &a;
    //     int *p2 = &b;
    //     swapp(&p1, &p2);
    //     ｝

    //         void
    //         swapp(int *&rp1, int *&rp2)
    //             ｛ int *t;
    //     t = rp1;
    //     rp1 = rp2;
    //     rp2 = t;
    //     ｝ int main()
    //     {
    //         int a = 1, b = 2;
    //         int *p1 = &a;
    //         int *p2 = &b;
    //         swapp(p1, p2);
    //         ｝
    // player("比尔", "幸存者", 1909, 2000, "比尔是一个退伍老兵，经历过多次战争，最终成为“生存”经验丰富的老兵，身患癌症，无亲朋好友，孤寡老人，酷爱抽烟。感染爆发时准备在Mercy Hospital做手术。从医院逃出后回敬老院重新装备上当年的步枪和军衣。性格沉稳冷静的领导型人物。是四人小组里名副其实的领袖."
    //                                      "M14",
    //        "tank,Boomer,Hunter", " Smoker,Charger,Spitter", 150, 360);
    // std::cout << std::endl;
    // player("coach", "幸存者", 1560, 1999, "Coach有一颗宽容的心，健康的胃口和一把邪恶的电锯，膝盖受伤后，他结束在大学作为防守线员的职业生涯，得到了一个棒球教练的学位，并在他家乡的高中执教，可能作为一名新进棒球教练执教一个新的团队并不能使他最好的道路，但是在指导一个生存者队伍Coach发挥了他的领导能力，Coach看着自己心爱的家乡获得被感染，现在是时候发挥他的作用，用南方的热情好客蹂躏丧尸。"
    //                                       "电锯",
    //        "Charger,Boomer,Spitter", "tank,Smoker,Hunter", 300, 600);
    // std::cout << jiafa(12, 333) << std::endl;
    // std::cout << kanshuchang("房产") << std::endl;
    // std::cout << xiaoshujiajian(1.11, 2.22) << std::endl;

    // std::string A;
    // int level = 30;

    //     int jisuanqi = 1;
    //     int jieguo = 0;

    //     while (jisuanqi <= 1000)

    //     {
    //         std::cout << "卢本伟伞兵"
    //                   << jisuanqi++
    //                   << "号已准备" << std::endl;
    //         jieguo = jisuanqi + jieguo;
    //         jisuanqi = jisuanqi +
    //     }
    //     std::cout << jieguo++ << std::endl;
    // }
    // int a = 3;
    // int b = 9;
    // int c = 12;
    // int d = 15;
    // int x = 15;
    // std::cout << "你的钱为" << ((a != x) || (d == x)) * 1000 << "元" << std::endl;
    // std::cout << "你的分数为" << ((a != x) && (d == a)) * 1000 << "分" << std::endl;

    /*if (((a != x) || (d == x)) * 1000 > ((a != x) && (d == a)) * 1000)
    {
        std::cout << "你是个钱多分低的人" << std::endl;
    }
    if (((a != x) || (d == x)) * 1000 < ((a != x) && (d == a)) * 1000)
    {
        std::cout << "你是个钱低多分的人" << std::endl;
    }*/

    /* int e = 20;
    int x;
    int y;
    std::cout << "***********************中奖活动**************" << std ::endl;
    std::cout << "**************请输入您的彩票号码**************" << std ::endl;
    std::cin >> x;
    if (e == x)
    {
        std::cout << "你猜对了!奖励你1000万美金!" << std ::endl;
    }
    else if (e > x)
    {
        std::cout << "你猜错了!你被扔到了水里喂鱼了!" << std::endl;
    }
    else if (e < x)
    {
        std::cout << "你被打了一顿,并失去了你身上的钱!" << std::endl;
        std::cout << "你还有钱吗?(有输入1,没有输入0)";
        std::cin >> y;
        if (y == 0)
        {
            std::cout << "你的衣服被抢走了,只留下一条小内裤!" << std::endl;
        }
        else
        {
            std::cout << "你的钱被拿走了!" << std::endl;
        }
    }*/

    // std::string zhanghao = "1067483588";
    // std::string mima = " 1101slwh";
    // std::string zhanghao1;
    // std::string mima1;
    // int jishuqi = 0;
    // while (jishuqi < 3)
    // {
    //     std::cout << "请输入您的账号:";
    //     std::cin >> zhanghao1;
    //     std::cout << "请输入您的密码:";
    //     std::cin >> mima1;
    //     if ((zhanghao == zhanghao) && (mima == mima))
    //     {
    //         std::cout << "输入正确!" << std::endl;
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "你错了,再来一次!" << std::endl;
    //     }
    //     jishuqi++;
    //     if (jishuqi >= 3)
    //     {
    //         std::cout << "***你要去办张智商卡了!!!!!" << std::endl;
    //         return 0;
    //     }
    //     else
    //     {
    //         std::cout << "账号错误或密码错误!" << std::endl;
    //         return 0;
    //     }
    //     std::cout << "***姓名***:不羁之风-夏侯惇 \n"
    //               << std::endl;

    //     std::cout << "***种族:人  \n"
    //               << std::endl;
    //     std::cout << "***等级***:" << 10 << "\n";
    //     std::cout << "***生命***:" << 3307 * level * 1 << "\n";
    //     std::cout << "*攻击力**: " << 159 * level * 1 << "\n"
    //               << std::endl;
    //     std::cout << "***护甲***:" << 89 * level * 1 << "\n"
    //               << std::endl;
    //     std::cout << "***蓝条***:" << 430 * level * 1 << "\n"
    //               << std::endl;
    //     std::cout << "***被动***:噬目冷却值：60 消耗：0 "
    //                  "***介绍***:"
    //                  "夏侯惇生命值低于50％时，每一次技能或普通攻击命中目标都会回复3％"
    //                  "的最大生命值，持续8秒；每30秒最多触发一次\n"
    //               << std::endl;
    //     std::cout
    //         << "**1技能***:豪气斩,冷却值：7 消耗：50 "
    //            "介绍:夏侯惇挥动大刀，向指定方向斩一道刃风，对路径上的敌人造成240/290/"
    //            "340/390/440/"
    //            "490（+"
    //            "100％物理加成）点物理伤害并减少其50％移动速度，持续2秒；刃风命中英雄"
    //            "后可再次挥动大刀向指定范围方向释放豪气斩，豪气斩会造成240/290/340/"
    //            "390/440/490（+100％物理加成）点物理伤害并将范围内敌人击飞1秒\n"
    //         << std::endl;
    //     std::cout << "**2技能***:龙卷闪,冷却值：12/11/10/9/8/7消耗：60 "
    //                  "***介绍***:夏侯惇对周围敌人造成200/225/250/275/300/"
    //                  "325（+"
    //                  "70％物理加成）点法术伤害；同时获得一个可抵免等同于自身额外最大"
    //                  "生命值15％的护盾，持续5秒；并且夏侯惇的下三次普通攻击将附加100"
    //                  "点真实伤害，持续8秒；每次攻击会减少1秒不羁之刃的冷却时间\n"
    //               << std::endl;
    //     std::cout << "**3技能***:不羁之刃,冷却值：15消耗：80 "
    //                  "***介绍***:"
    //                  "夏侯惇向指定目标方向扔出链刃，链刃飞向指定位置或击中敌人后会对"
    //                  "范围内敌人造成300/425/"
    //                  "550(+"
    //                  "118％物理加成）点物理伤害并将自己拉向链刃位置，并且击中的首个敌"
    //                  "人会眩晕1秒；夏侯惇飞抵目标区域后还将追加300/425/"
    //                  "550（+118％物理加成）点物理伤害\n"
    //               << std::endl;
    //     std::cout << "***简介***:"
    //                  "夏侯惇属于坦克/"
    //                  "战士类英雄，拥有出色的生存能力，可以依靠被动的回血能力加上二技"
    //                  "能的高额护盾，能让他与其他英雄硬拼的时候占据有利形式，技能的整"
    //                  "体CD都很短，打持久战的能力很强，对线时几乎牢牢吃住其他坦克、战"
    //                  "士英雄，比如刘邦、苏烈、白起、亚瑟，也能与程咬金、老夫子长时间"
    //                  "僵持，缺点是惧怕吕布、典韦这样拥有高额真伤的英雄，后期的肉度比"
    //                  "不上项羽、廉颇，面对后排缺少直接有效的控制\n"
    //               << std::endl;
    //     return 0;
    //}
}
