# README

This project uses `platformio` CLI.

To upload: 

```
platformio run --target upload
```

To connect to serial port: 

```
pio -f -c atom serialports monitor --raw --port /dev/ttyUSB0 -b 115200
```

For the [getting started presentation, go here](https://mauriciojost.github.io/2020/04/30/arduino-finally-getting-started/presentation.html#/).
