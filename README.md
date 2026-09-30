# `C_HEADER`
> C++17 Standard C Entities Namespace

This project is simply a namespace wrapper for standard C functions under `son8::c` namespace for **C++17**.

## Install
> TODO: install target only on `v1.0.0` release

### Fetch

```cmake
if( NOT TARGET son8__c_header )
    include( FetchContent )
    message( STATUS "${SON8_APP}: FetchContent `soneight/c_header`" )
    fetchcontent_declare(
        son8__c_header
        GIT_REPOSITORY https://github.com/soneight/c_header.git
        GIT_TAG        8a6c65bb738da26f1852a7e3f251b3a57e394241 # v0.1.2
    )
    fetchcontent_makeavailable( son8__c_header )
endif( )
message( STATUS "${SON8_APP}: target `son8__c_header` found" )
```

## Testing

Testing is performed on specialized organization [son8test](https://github.com/son8test/c_header) repository

## [CONTRIBUTING](./CONTRIBUTING.md)
> Project Contribution Rules

## [LICENSE](./LICENSE) [Apache-2.0](./LICENSE.Apache-2.0.md) [NOTICE](./NOTICE)
> Project Copying Rules with attribution notice

###### each folder MAY contain README with additional materials
