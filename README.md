# rootkit
Rootkit for linux kernel 6.12.6 and before

# run LFS 
```bash
qemu-system-x86_64 -hda disk.img -nographic \
  -fsdev local,id=shared_folder,path=./src/,security_model=none \
  -device virtio-9p-pci,fsdev=shared_folder,mount_tag=sharedfolder
```
