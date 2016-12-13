This is kernel dkms  module for RTS525A PCI Sdcard Reader for RHEL6.8 OS kernel.


##Installation
dkms add  -m rtsx_pci -v 2.6
dkms build -m rtsx_pci -v 2.6
dkms install -m rtsx_pci -v 2.6

remove:
dkms remove  -m rtsx_pci -v 2.6 --all


