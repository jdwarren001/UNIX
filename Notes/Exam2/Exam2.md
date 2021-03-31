# Exam 2

## cfdisk
    /dev/sda
        -> Whole drive that makes drive
        -> All 0-250gb or however mcuh
    /dev/sda1
        -> First partition of sda
        -> File system for sda
            Microsoft - NTFS, FAT32
            Linux - EXT3, EXT4...

## mkfs
    Arg[0] -> Single exe doing multiple 
        mkfs /dev/sda1 -> mkfs.ext or mkfs.msdos....

        Access partitions from command


## mount/unmount
    mounts/unmounts file system
    -> Linux always try to mount
        - If fails, up to user (Wont try again)
    -> Microsoft 
        - Actions cause it to try to mount

## fsck
    Checks integrity of file system

## dd
    Bite for bite copy of a disk/partition/file...

## date
    set/get date in any format

    Machines with no RTC can get set using this 
     - Uses little battery
    Network usees NTP - Network Time Protocol
     - Very accurate (ms)


## diff
    Compare two files for consistancy

## numdiff
    Smarter compare for files with numbers

## `crontab`
    Run application at particular time

## lsmod
    list kernel modules/drivers in use
    -> Have .ko for kernel object

## insmod
    insert new kernel mod

## rmmod
    Remove kernel mod

## modprobe
    Check if all drivers will function with hardware

## UDEV Rules
    HotPlug what happens when device is added to system

    Identifies device info

## Glade
    GUI design tool (Works with many languages)
    Just give .xml and .py and App ready

## lib____
    Library of code for that thing (lib" ")

    -dev on end includes header files

## tar
    put files into single file and preserve permissions/structure
    -> Archive for files
    -> Can also zip files

    .tar.gz -> tar -> gzip
    .tgz -> -czf
    -c create
    -x extract
    -z zip
    -f file

    tar -czf creates zip file