# General Linux Commands

### ls usb -v
    Lists details of devices mounted

### swapiness
    Used for ram overrun. Pushed to the swap
    Default linux has /root and /swap

    > sudo swapon //swap on
    > sudo swapoff //turns it off

    Runs much more slow to send off to extneral ram

### sdb
    **Under the /dev folder
    sd? is the entire mounted device
    sd?1 is a segment of the *partition table*

    -> Partition table: Little chunk of mounted memory.

    - fsck
        > Checks file consistency if unmounted incorrectly

    - cfdisk
        > configure disk/mounted device

    - sudo umount "file/path/to/drive"
        > Unmount device

    - sudo mkfs "file path to disk"
        > Formats mounted device that you partitioned
    
    - sudo dd if=/dev/sdb1 of=/dev/sdb2
        > copies sdb1 info onto sdb2

### dmesg
    (time) and activity log of all things the machine has done since booted. 

### lsmod
    All kernel modules (drivers) loaded on the machine

    -> Kernel: When computer launches, has a bunch of exe that run
        - ** .ko ** objects are public objects that are reserved for the kernel

### insmod
    Adds new exe to kernel (needs .ko reference)

### modprobe
    Add or delete modules to kernel

---
<br>

# <b>New Basics</b>


### date
    shows exact date in linux terminal

    -> NTP: server that coordinates machine and server to be very close to server time.

