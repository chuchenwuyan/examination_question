\[防御性编程笔记]

Input Validation: 永远不要假设用户（或测试系统）一定会给你正确的输入。

scanf 的双重身份: 它既是“数据搬运工”（把值给 F），也是“信号发报机”（通过返回值告诉 main 成功与否）。

if (!scanf)：如果发报机报了错，我们就不要去动内容物了。

DRY原则：Don't Repeat Yourself（不要重复自己）。重复的 printf 应该被提取出来。

