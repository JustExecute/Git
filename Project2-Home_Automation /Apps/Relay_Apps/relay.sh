#!/bin/bash
gpio1=10
gpio2=9
 
if [ ! -d /sys/class/gpio/$gpio1 ]; 
	then 
	echo $gpio1 > /sys/class/gpio/export; 
	fi
if [ ! -d /sys/class/gpio/$gpio2 ]; 
	then 
	echo $gpio2 > /sys/class/gpio/export; 
	fi
 
click() {
    state="`cat /sys/class/gpio/gpio$1/direction`"
    if [ $state = "in" ] ; then
        state='out'
    else
        state='in'
    fi
 
    echo $state > /sys/class/gpio/gpio$1/direction
}
 
while : ;do
    click $gpio1
    sleep .2
    click $gpio2
    sleep .4
done
