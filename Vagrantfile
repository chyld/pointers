Vagrant.configure(2) do |config|
config.vm.network "forwarded_port", guest: 3000, host: 3000
  config.vm.box = "chyld/mercury"
  config.vm.hostname = "edu"
  config.vm.provider "virtualbox" do |v|
    v.name = "edu"
    v.memory = 1024
    v.cpus = 2
  end
end
