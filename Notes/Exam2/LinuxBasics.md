# General Linux Commands

<br> <br>

## <b>Memory</b>
---
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

<br> <br>

## <b>Kernels and mod</b>
---

### lsmod
    All kernel modules (drivers) loaded on the machine

    -> Kernel: When computer launches, has a bunch of exe that run
        - ** .ko ** objects are public objects that are reserved for the kernel

### insmod
    Adds new exe to kernel (needs .ko reference)

### modprobe
    Add or delete modules to kernel

---

### date
    shows exact date in linux terminal

    -> NTP: server that coordinates machine and server to be very close to server time.

---

<br> 

## <b>File Differences</b>

---
### diff 
    prints both files to show side by side differences
    *only prints the differences between the files*

    - "-y" creates side by side orientation

    - Useful for text files (can use for images, etc., but only sates that they are diff)

### numdiff
    same thing, but shows just the number of the files being different

> Shows T/F of  file consistency

---

## <b>Archives/Zips</b>

### tar
    TAPE ARCHIVE: Able to use archive and extract files 
        - (Kinda like zip)
        - Puts it in a block to download later

    << tar -cf filename.tar fileOriginal >>

    -> creates a .tar archive copy of item
    -> cf is create file, then new file name, file/folder to be copied

    << tar -czf "backup`date '+%m_%d_%y'`.tgz" temp>>

    -> create zip file name backup.tgz (with sepcific time) of temp folder

    *Zip file is smaller than tar archive so use czf*

### crontab -e
    backs up file every certain amount of time

---

## <b>Website stuff</b>

### whois "website name" / nslookup "website"
    finds a bunch of data on the creator of the website

### ping 
    tells the time it takes for messages to be sent to addresses and back

### traceroute
    Similar to ping but tells the addresses that packets went through

---