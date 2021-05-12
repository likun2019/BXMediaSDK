#
#  Be sure to run `pod spec lint BXMediaSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|
  spec.name         = "BXMediaSDK"
  spec.version      = "1.4.2.5"
  spec.summary      = "A good activity tool for iOS"
  spec.description  = <<-DESC 
                      "活动工具SDK新版"
                      DESC
  spec.homepage     = "https://github.com/likun2019"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "likun" => "zziajkx@gmail.com" }
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.source       = { :git => "https://github.com/likun2019/BXMediaSDK.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = 'BXMediaSDK.framework'
  spec.framework  = "UIKit"
  # spec.static_framework = true
  spec.requires_arc = true
  # spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64' }
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
