Name:          b19-565-01
Version:       1.0
Release:       1%{?dist}
Summary:       Программа студента Aldabergenov Nursultan группы B19-565
Group:         Testing
License:       GPL
URL:           https://github.com/DuckStan/os_labs
Source0:       /home/nursultan/os_labs/rpmbuild/%{name}-%{version}.tar.gz
BuildRequires: /bin/rm, /bin/mkdir, /bin/cp
Requires:      /bin/bash, /usr/bin/date
BuildArch:     noarch

%description
A test package

%prep
%setup -q

%install
mkdir -p %{buildroot}%{_bindir}
install -m 755 b19-565-01 %{buildroot}%{_bindir}

%files
%{_bindir}/b19-565-01

%changelog
* Thu Oct 16 2012 Aldabergenov
- Added %{_bindir}/b19-565-01
