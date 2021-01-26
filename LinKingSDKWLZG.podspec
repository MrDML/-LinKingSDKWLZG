#
# Be sure to run `pod lib lint LinKingSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinKingSDKWLZG'
  s.version          = '0.0.1'
  s.summary          = 'LinKingSDKWLZG Quick Integration Solution'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: LinKingSDKWLZG is Overseas SDK Quick Integration Solution.
                       DESC

  s.homepage         = 'https://github.com/MrDML/LinKingSDKWLZG'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'leaon' => 'leaon' }
  s.source           = { :git => 'https://github.com/MrDML/LinKingSDKWLZG.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  
  s.static_framework = true

  s.vendored_frameworks = "LinKingSDK/Products/LinKingSDK.framework"
  s.resources = "LinKingSDK/Assets/*.*"
  s.dependency 'SDWebImage'
  s.dependency 'IQKeyboardManager', '~> 6.5.5'
  s.dependency 'TPKeyboardAvoiding', '~> 1.3.4'
  s.dependency 'TZImagePickerController', '~> 3.5.1'
  s.dependency 'Toast', '~> 4.0.0'
  s.dependency 'WechatOpenSDK'
  s.subspec 'libTalkingDataAppCpa' do |libTalkingDataAppCpa|
      libTalkingDataAppCpa.source_files = 'LinKingSDK/TalkingData/*.h'
      libTalkingDataAppCpa.public_header_files = 'LinKingSDK/TalkingData/*.h'
      libTalkingDataAppCpa.frameworks = 'Security','CoreTelephony','AdSupport','SystemConfiguration'
      libTalkingDataAppCpa.library = 'z'
  end
  s.vendored_libraries = 'LinKingSDK/TalkingData/libTalkingDataAppCpa.a'
  s.xcconfig = {
      'VALID_ARCHS' =>  'arm64 x86_64 armv7',
  }
  # s.resource_bundles = {
  #   'LinKingSDK' => ['LinKingSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
