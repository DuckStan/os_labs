Name:       c-b19-565-01
Version:    1.0
Release:    1%{?dist}
Summary:    Программа студента Aldabergenov Nursultan группы b19-565
Group:      Testing
License:    GPL
URL:        https://github.com/DuckStan/os_labs
Source:     %{name}-%{version}.tar.gz
BuildRequires: gcc

%description
A test package

%prep
%setup -q

%build
gcc -O2 -o c-b19-565-01 c-b19-565-01.c

%install
mkdir -p %{buildroot}%{_bindir}
cp c-b19-565-01 %{buildroot}%{_bindir}
sudo rpm -i ~/rpmbuild/RPMS/noarch/b19-565-01-1.0-1.el7.noarch.rpm --force

%files
%{_bindir}/c-b19-565-01

%changelog
* Thu Oct 16 2012 Aldabergenov
- Added %{_bindir}/c-b19-565-01
