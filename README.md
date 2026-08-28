# Illinois Cluster Cyclus Testing
Cyclus example codes for testing on cluster

Every time a new component is added, it should have comments explaining what it does and what it needs in the code


# Running Cyclus code on the cluster:

## NOTE: As of current testing, the US Inventory model does NOT work on the cluster. It requires compiling Cyclus from source, which requires the installation of packages and systems that require `sudo` access, which I and most others do not have

## Put your code on the cluster
Install FileZilla on your computer to assist with sending files to and recieving files from the cluster

Connect to the cluster with FileZilla and send your .xml file to the cluster
> Put the file in the directory/folder you want all your Cyclus files to be in, for me I used /u/heberer3/scratch


## Install Cyclus on the cluster

### Install conda onto the cluster
> Miniconda should be fine, and this tutorial is for that. If you want to use Anaconda and know how to install it, the rest should still apply
> This install is based on `https://www.anaconda.com/docs/getting-started/miniconda/install/linux-install`

Download the latest version of Miniconda by running `curl -O https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh` in the terminal
> [Optional] If you want to, you can run `sha256sum <PATH_TO_INSTALLER_FILE>` where you replace <PATH_TO_INSTALLER_FILE> with the location of what you just downloaded, and compare the resulting hash value to the corresponding one at `https://repo.anaconda.com/miniconda/` to ensure that this is the official installer. 

Install Miniconda by running `bash ~/Miniconda3-latest-Linux-x86_64.sh`

Accept all of the prompts and the agreements 
> When it asks if you want to initialize `conda` by default, say yes. This allows you to run `conda` commands without initializing it every time you connect to the cluster and will save you lots of headache.
> You can check to make sure the install and initialization went correctly by running `conda list` which will error if `conda` was not installed.

### Install Cyclus 
Create an environment to install Cyclus and run your code in with `conda`
Cyclus requires Python above 3.8
> `conda create --name cyclus_env python=3.11` (cyclus_env is just an example environment name, you can name it whatever you want)
> _You may need to downgrade python by installing an older version, Cyclus may fail to run on the latest versions_

Activate your environment with `conda activate cyclus_env`

Install Cyclus and Cycamore with `conda install -c conda-forge cycamore`
> If this fails because of a certificate verification issue, run `conda config --set ssl_verify false` and then run the above command again

Verify that both are installed by running the test command `cyclus_unit_tests` and then running `cycamore_unit_tests`
> If one of these fails to run, the install was not complete, which you should be able to resolve by running the install command again
> All of the tests should report as passed or disabled


## Run the Cyclus code

With the environment active navigate to the directory with the Cyclus code added using FileZilla

For an example input file, run it using `cyclus -i example_input.xml`

The name of the output file will be `cyclus.sqlite` by default
> You can specify the name of the output file with the -o flag, for example: `cyclus -i example_input.xml -o example_output.sqlite`

The code will run in the terminal and will produce an output file in the same directory the input file was in

You can retrieve this code from the cluster using FileZilla 