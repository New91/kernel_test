
hello模块
1.  下载内核源码，编译模块要用到符号表
    ubuntu
    sudo apt-get install linux-source
    centos
    yum install kernel*

2. sudo insmod hello.ko --安装模块
3. dmesg -k --查看输出的信息
   lsmod | grep hello  --查看内核模块
5. sudo rmmod  hello --卸载模块
    dmesg -k --查看输出的信息