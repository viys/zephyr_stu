```shell
git clone --recursive https://github.com/viys/zephyr_stu.git
```

[Zephyr Project Documentation — Zephyr Project Documentation](https://docs.zephyrproject.org/latest/)

```shell
source ~/zephyrproject/.venv/bin/activate
west build -b qemu_x86 -p auto ./qemu_x86/
west build -t run
```

