#pragma once

#include "Components.h"

#include <string>
#include <tuple>
#include <vector>
#include <optional>

using SparseComponentStorage = std::tuple<
	std::vector<std::optional<CTransform>>,
	std::vector<std::optional<CInput>>
>;

class EntityMemoryPool
{
	std::size_t m_totalEntities;
	SparseComponentStorage m_pool;
	std::vector<std::string> m_tags;
	std::vector<bool> m_active;
public:
	explicit EntityMemoryPool(std::size_t capacity);

	std::size_t capacity() const;

	template<typename T>
	std::vector<T>& getStorage()
	{}
};