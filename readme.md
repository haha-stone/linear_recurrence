#线性递归方程的求解
######id: 11911611
######name:张通
##preface
As a students majored in computer science,my favorite subject is linear algebra so that I choose this.However,I want to solve this kind of problems in many ways,from aspects of programming and mathmatics.The English writing is so hard that I cannot express all of my thoughts and it upsets me.Whats more ,I have to change each of my formulas as an image and then put it on markdown.I see this project more as a report of my thinking and conclusion rather a very standard essay.I believe the the most important of this project is to encourage me to learn more and I only have one day to complete it so there still exists some problems.What's more ,I waste a lot of time on some small things like showing the formula.Thanks for your understanding.
##two problems
###Hanoi[1]
####content
![330px-Tower_of_Hanoi.jpeg](https://i.loli.net/2021/01/10/a6plc7EBFQsfO8S.jpg)

Hanoi tower is a mathematical problem based on a legend.
There are three poles. There is a perforated disc on the rod, and the size of the disc decreases from bottom to top. It is required to move all discs to the rod according to the following rules:
Only one disc can be moved at a time;
The large market cannot be stacked on the small one.
Tip: the disc can be temporarily placed on the rod, or the disc removed from the rod can be moved back to the rod, but the above two rules must be followed.
How to move? At least how many times?
####analysis
there are 3 steps:
1. Move the above n-1 disks from A to B
2. Move the bottom n disk from A to C
3. Move n-1 disks from B to C

 note f(n) as the minimum number of times a disc needs to be moved from A to C
 Then the following equation holds:
 ![image.png](https://i.loli.net/2021/01/10/GYAdakoBWc8q9K2.png)
 ###Fibonacci[2]
 ####content
 At the beginning of the first month, there was a pair of newborn rabbits.
 After the second month (at the beginning of the third month), they are fertile.
 Every month, each pair of fertile rabbits will give birth to a new pair of rabbits
 Rabbits never die
 ####analysis
 ![image.png](https://i.loli.net/2021/01/10/bV1YkuBE96LJ5tX.png)

 ![image.png](https://i.loli.net/2021/01/10/6F7mbV5DCntkvWO.png)
 ##concepts[3]
 The first order linear recurrence relation with constant coefficients can be expressed as follows:
![image.png](https://i.loli.net/2021/01/10/9MYevU6RiKTOyJE.png)

![image.png](https://i.loli.net/2021/01/10/f4ZhHMmLD2w38bk.png)
are constants,![image.png](https://i.loli.net/2021/01/10/gdzX4eDoyBRTEcK.png)
,F(n) is called control item.When F(n)=0,we call it as homogenous linear recurrence relation,such as Fibonacci
##solution
###programming
https://github.com/haha-stone/linear_recurrence
####tail recurrence
The last action in a function is a function call: that is, the return value of the call is directly returned by the current function. In this case, the calling position is called tail position. If this function calls itself at the tail (or a tail calls other functions of itself, etc.), it is called tail recursion, which is a special case of recursion.
###matrix
![image.png](https://i.loli.net/2021/01/10/3VlULs6rPAOY4np.png)

let ![image.png](https://i.loli.net/2021/01/10/yfc4KsTUm1HvQGY.png)
![](data:image/png;base64,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)


##reference
[1]https://zh.wikipedia.org/wiki/%E6%B1%89%E8%AF%BA%E5%A1%94
[2]https://zh.wikipedia.org/wiki/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97
[3]https://en.wikipedia.org/wiki/Recurrence_relation
