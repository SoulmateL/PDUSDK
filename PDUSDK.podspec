#
# Be sure to run `pod lib lint PDUSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PDUSDK'
  s.version          = '1.1.2'
  s.summary          = 'PUDSDK3.0'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/SoulmateL/PDUSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'SoulmateL' => '936118815@qq.com' }
  s.source           = { :git => 'https://github.com/SoulmateL/PDUSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'PDUSDK.framework/Headers/*.{h}'
  s.vendored_frameworks = 'PDUSDK.framework'

  # s.resource_bundles = {
  #   'PDUSDK' => ['PDUSDK/Assets/*.png']
  # }
  s.xcconfig = {
    "HEADER_SEARCH_PATHS": "${PODS_ROOT}/PDUSDK/PDUSDK.framework/Headers/"
  }
  #s.public_header_files = 'PDUSDK.framework/Headers/*.{h}'
  s.frameworks = 'UIKit'
  s.dependency 'AFNetworking', '~> 4.0.1'
  s.dependency 'FMDB', '~> 2.7.5'
end
